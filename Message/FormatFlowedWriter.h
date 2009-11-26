/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import <Foundation/NSObject.h>

@class PlainTextDocument, NSMutableString;

@interface FormatFlowedWriter : NSObject {
	PlainTextDocument* _inputDocument;
	unsigned _encoding;
	NSMutableString* _outputString;
	unsigned _addedTrailingSpaces : 1;
	NSMutableString* _lineString;
}
+(id)newWithPlainTextDocument:(id)plainTextDocument encoding:(unsigned long)encoding;
// inherited: -(void)dealloc;
-(unsigned)_findLineBreakInRange:(NSRange)range maxCharWidthCount:(unsigned)count endIsURL:(BOOL)url;
-(void)_outputQuotedParagraph:(id)paragraph range:(NSRange)range withQuoteLevel:(unsigned)quoteLevel;
-(id)outputString;
-(BOOL)addedTrailingSpaces;
@end
