//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKit/PDFCDocumentSignerCallback-Protocol.h>

@interface PSPDFDocumentSignerCallback : NSObject <PDFCDocumentSignerCallback>
{
    CDUnknownBlockType _completionBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)complete:(long long)arg1 document:(id)arg2 byteRange:(id)arg3;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
