//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFGalleryVideoItem.h>

#import <PSPDFKitUI/PSPDFRemoteContentObject-Protocol.h>

@class NSDictionary, NSError, NSString, NSURLRequest, PSPDFVimeoURLParameters;

@interface PSPDFGalleryVimeoVideoItem : PSPDFGalleryVideoItem <PSPDFRemoteContentObject>
{
    _Bool _loadingRemoteContent;
    double _remoteContentProgress;
    NSError *_remoteContentError;
    NSDictionary *_remoteContent;
    PSPDFVimeoURLParameters *_URLParams;
}

@property(retain, nonatomic) PSPDFVimeoURLParameters *URLParams; // @synthesize URLParams=_URLParams;
@property(retain, nonatomic) id remoteContent; // @synthesize remoteContent=_remoteContent;
@property(retain, nonatomic) NSError *remoteContentError; // @synthesize remoteContentError=_remoteContentError;
@property(nonatomic) double remoteContentProgress; // @synthesize remoteContentProgress=_remoteContentProgress;
@property(nonatomic, getter=isLoadingRemoteContent) _Bool loadingRemoteContent; // @synthesize loadingRemoteContent=_loadingRemoteContent;
- (void).cxx_destruct;
- (void)parseRemoteContent;
- (void)updateContentState;
@property(readonly, nonatomic) CDUnknownBlockType remoteContentTransformerBlock;
@property(readonly, nonatomic) _Bool shouldRetryLoadingRemoteContentOnConnectionFailure;
@property(readonly, nonatomic) _Bool shouldCacheRemoteContent;
@property(readonly, nonatomic) NSURLRequest *URLRequestForRemoteContent;
@property(readonly, nonatomic) _Bool hasRemoteContent;
- (id)error;
- (double)progress;
- (id)fallbackURL;
- (id)initInternallyWithDictionary:(id)arg1;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType completionBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CDUnknownBlockType remoteContentAuthenticationChallengeBlock;
@property(readonly) Class superclass;

@end
