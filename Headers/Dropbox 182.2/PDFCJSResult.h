//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFCJSError, PDFCJSEvent, PDFCJSValue;

@interface PDFCJSResult : NSObject
{
    PDFCJSValue *_value;
    PDFCJSEvent *_event;
    PDFCJSError *_error;
}

+ (id)JSResultWithValue:(id)arg1 event:(id)arg2 error:(id)arg3;
@property(readonly, nonatomic) PDFCJSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) PDFCJSEvent *event; // @synthesize event=_event;
@property(readonly, nonatomic) PDFCJSValue *value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)description;
- (id)initWithValue:(id)arg1 event:(id)arg2 error:(id)arg3;

@end
