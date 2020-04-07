//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface PSPDFGalleryItemResolver : NSObject
{
    double _timeoutIntervalForRequest;
    NSOperationQueue *_queue;
}

@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
- (void).cxx_destruct;
- (id)completionOperationWithMutableResolvedItems:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)resolveOperationForUnknownItem:(id)arg1 mutableResolvedItems:(id)arg2;
- (void)cancel;
- (void)resolveItemsByIssuingHTTPRequests:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)resolveItemsByParsingContentURL:(id)arg1;
- (void)resolveItems:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end
