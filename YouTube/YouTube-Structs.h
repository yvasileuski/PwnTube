/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
 */

#import <SystemConfiguration/SystemConfiguration.h>

typedef struct __SecKey SecKey;

typedef struct _xmlSAXHandler {
	/*function-pointer*/ void *internalSubset;
	/*function-pointer*/ void *isStandalone;
	/*function-pointer*/ void *hasInternalSubset;
	/*function-pointer*/ void *hasExternalSubset;
	/*function-pointer*/ void *resolveEntity;
	/*function-pointer*/ void *getEntity;
	/*function-pointer*/ void *entityDecl;
	/*function-pointer*/ void *notationDecl;
	/*function-pointer*/ void *attributeDecl;
	/*function-pointer*/ void *elementDecl;
	/*function-pointer*/ void *unparsedEntityDecl;
	/*function-pointer*/ void *setDocumentLocator;
	/*function-pointer*/ void *startDocument;
	/*function-pointer*/ void *endDocument;
	/*function-pointer*/ void *startElement;
	/*function-pointer*/ void *endElement;
	/*function-pointer*/ void *reference;
	/*function-pointer*/ void *characters;
	/*function-pointer*/ void *ignorableWhitespace;
	/*function-pointer*/ void *processingInstruction;
	/*function-pointer*/ void *comment;
	/*function-pointer*/ void *warning;
	/*function-pointer*/ void *error;
	/*function-pointer*/ void *fatalError;
	/*function-pointer*/ void *getParameterEntity;
	/*function-pointer*/ void *cdataBlock;
	/*function-pointer*/ void *externalSubset;
	unsigned initialized;
	void *_private;
	/*function-pointer*/ void *startElementNs;
	/*function-pointer*/ void *endElementNs;
	/*function-pointer*/ void *serror;
} xmlSAXHandler;

