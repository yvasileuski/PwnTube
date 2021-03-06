/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import <Foundation/Foundation.h>

@class YTSearchRequest;

@interface YTVideoDataSource : NSObject {
	BOOL _hasLoaded;
	NSMutableArray *_videos;
	YTSearchRequest *_searchRequest;
	unsigned _startIndex;
	unsigned _videosRemaining;
	NSError *_lastError;
}
@property(readonly, assign) BOOL hasLoaded;	// converted property
@property(readonly, retain) NSError *lastError;	// converted property
@property(readonly, retain) NSMutableArray *videos;	// converted property
@property(readonly, assign) unsigned videosRemaining;	// converted property
+ (void)saveDataSources;
+ (void)setShouldRemoveOldDefaults;
+ (id)sharedDataSource;
+ (BOOL)shouldRemoveOldDefaults;
- (id)init;
- (void)_clearVideos;
- (id)_deprecatedVideosDefaultsKey;
- (void)_didChange;
- (void)_saveToDefaults;
- (void)_searchRequestLoadingStatusDidChange;
- (void)_setLastError:(id)error;
- (void)_setVideos:(id)videos;
- (void)addVideos:(id)videos toTop:(BOOL)top;
- (void)dealloc;
// converted property getter: - (BOOL)hasLoaded;
- (BOOL)isLoading;
// converted property getter: - (id)lastError;
- (void)loadFromDefaults;
- (void)loadMore;
- (unsigned)maxVideosToSave;
- (void)reloadData;
- (void)removeAllVideos;
- (void)removeVideoAtIndex:(int)index;
- (void)searchRequest:(id)request didFailWithError:(id)error;
- (void)searchRequest:(id)request receivedVideos:(id)videos startIndex:(unsigned)index videosRemaining:(unsigned)remaining;
// converted property getter: - (id)videos;
// converted property getter: - (unsigned)videosRemaining;
@end

