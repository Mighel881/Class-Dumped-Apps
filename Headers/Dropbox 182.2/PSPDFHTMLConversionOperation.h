//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKit/PSPDFConversionOperation.h>

@class NSString;

@interface PSPDFHTMLConversionOperation : PSPDFConversionOperation
{
    NSString *_HTMLString;
}

@property(readonly, copy, nonatomic) NSString *HTMLString; // @synthesize HTMLString=_HTMLString;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (id)partialDescription;
- (id)initWithHTMLString:(id)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithHTMLString:(id)arg1 outputURL:(id)arg2 options:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
