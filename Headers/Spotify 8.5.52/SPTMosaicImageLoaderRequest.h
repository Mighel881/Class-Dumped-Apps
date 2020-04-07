//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTImageLoaderRemoteCallback-Protocol.h"
#import "SPTImageLoaderRequest-Protocol.h"

@class NSDate, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol SPTImageLoaderRemote, SPTImageLoaderRemoteCallback, SPTImageLoaderRequestDelegate;

@interface SPTMosaicImageLoaderRequest : NSObject <SPTImageLoaderRemoteCallback, SPTImageLoaderRequest>
{
    _Bool _allowUpscaling;
    _Bool _preventInMemoryCaching;
    _Bool _preventPersistentCaching;
    _Bool _cancelled;
    NSURL *_URL;
    NSDate *_creationDate;
    id _context;
    id <SPTImageLoaderRemoteCallback> _callback;
    NSString *_persistenceKey;
    id <SPTImageLoaderRequestDelegate> _delegate;
    id <SPTImageLoaderRemote> _baseImageLoader;
    NSString *_sourceIdentifier;
    unsigned long long _numberOfParts;
    NSMutableDictionary *_mosaicParts;
    NSMutableArray *_mosaicErrors;
    NSMutableArray *_mosaicRequests;
    struct CGSize _requestedSize;
    struct CGSize _downloadSize;
}

@property(retain, nonatomic) NSMutableArray *mosaicRequests; // @synthesize mosaicRequests=_mosaicRequests;
@property(retain, nonatomic) NSMutableArray *mosaicErrors; // @synthesize mosaicErrors=_mosaicErrors;
@property(retain, nonatomic) NSMutableDictionary *mosaicParts; // @synthesize mosaicParts=_mosaicParts;
@property(nonatomic) unsigned long long numberOfParts; // @synthesize numberOfParts=_numberOfParts;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic) struct CGSize downloadSize; // @synthesize downloadSize=_downloadSize;
@property(readonly, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(readonly, nonatomic) __weak id <SPTImageLoaderRemote> baseImageLoader; // @synthesize baseImageLoader=_baseImageLoader;
@property(nonatomic) __weak id <SPTImageLoaderRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool preventPersistentCaching; // @synthesize preventPersistentCaching=_preventPersistentCaching;
@property(readonly, nonatomic) _Bool preventInMemoryCaching; // @synthesize preventInMemoryCaching=_preventInMemoryCaching;
@property(retain, nonatomic) NSString *persistenceKey; // @synthesize persistenceKey=_persistenceKey;
@property(readonly, nonatomic) __weak id <SPTImageLoaderRemoteCallback> callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) struct CGSize requestedSize; // @synthesize requestedSize=_requestedSize;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) _Bool allowUpscaling; // @synthesize allowUpscaling=_allowUpscaling;
- (void).cxx_destruct;
- (void)imageLoaded:(id)arg1 withDataKey:(id)arg2 forURL:(id)arg3 startTime:(id)arg4 forEntity:(id)arg5;
- (void)imageLoadError:(id)arg1 forURL:(id)arg2 context:(id)arg3;
- (void)imageLoaded:(id)arg1 forURL:(id)arg2 startTime:(id)arg3 context:(id)arg4;
- (void)dispatchError:(id)arg1;
- (void)dispatchSuccess:(id)arg1;
- (void)buildMosaicImage;
- (void)buildSingleImage;
- (void)handleCallback;
- (void)loadMosaic;
- (void)cancel;
- (void)load;
- (id)initWithURL:(id)arg1 sourceIdentifier:(id)arg2 downloadSize:(struct CGSize)arg3 requestedSize:(struct CGSize)arg4 allowUpscaling:(_Bool)arg5 context:(id)arg6 dataLoader:(id)arg7 delegate:(id)arg8 callback:(id)arg9 baseImageLoader:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
