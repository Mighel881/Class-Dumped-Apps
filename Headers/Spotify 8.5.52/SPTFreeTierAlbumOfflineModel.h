//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierEntityOfflineViewModel-Protocol.h"
#import "SPTOfflineObserver-Protocol.h"

@class NSArray, NSString, NSURL, SPTCollectionPlatformFetchOptions;
@protocol SPTAlertInterface, SPTCollectionPlatform, SPTCollectionPlatformDataLoaderRequestToken, SPTFreeTierAlbumCosmosMetadataFields, SPTFreeTierEntityOfflineDelegate, SPTOfflineManager, SPTProductState;

@interface SPTFreeTierAlbumOfflineModel : NSObject <SPTOfflineObserver, SPTFreeTierEntityOfflineViewModel>
{
    _Bool _loaded;
    id <SPTFreeTierEntityOfflineDelegate> _offlineDelegate;
    NSURL *_URL;
    id <SPTOfflineManager> _offlineManager;
    id <SPTCollectionPlatform> _collectionPlatform;
    NSString *_username;
    NSURL *_offlineUrl;
    NSArray *_trackItems;
    id <SPTCollectionPlatformDataLoaderRequestToken> _viewSubscription;
    SPTCollectionPlatformFetchOptions *_fetchOptions;
    id <SPTFreeTierAlbumCosmosMetadataFields> _rawMetadata;
    NSArray *_rawTracks;
    id <SPTAlertInterface> _alertInterface;
    id <SPTProductState> _productState;
}

@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) id <SPTAlertInterface> alertInterface; // @synthesize alertInterface=_alertInterface;
@property(retain, nonatomic) NSArray *rawTracks; // @synthesize rawTracks=_rawTracks;
@property(retain, nonatomic) id <SPTFreeTierAlbumCosmosMetadataFields> rawMetadata; // @synthesize rawMetadata=_rawMetadata;
@property(retain, nonatomic) SPTCollectionPlatformFetchOptions *fetchOptions; // @synthesize fetchOptions=_fetchOptions;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> viewSubscription; // @synthesize viewSubscription=_viewSubscription;
@property(retain, nonatomic) NSArray *trackItems; // @synthesize trackItems=_trackItems;
@property(retain, nonatomic) NSURL *offlineUrl; // @synthesize offlineUrl=_offlineUrl;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <SPTFreeTierEntityOfflineDelegate> offlineDelegate; // @synthesize offlineDelegate=_offlineDelegate;
- (void).cxx_destruct;
- (void)offlineStateChangedForEntity:(id)arg1 withURL:(id)arg2;
- (_Bool)isOfflineSyncAvailable;
- (_Bool)isEntityOffline;
- (void)setEntityOffline:(_Bool)arg1;
- (void)downloadSavedAlbum;
- (void)saveAndDownloadAlbum;
- (void)setAlbumIsOfflined:(_Bool)arg1;
- (void)isAlbumComplete:(CDUnknownBlockType)arg1;
- (_Bool)albumIsOffline;
@property(readonly, nonatomic) unsigned long long releaseYear;
@property(readonly, nonatomic) NSURL *artistURL;
@property(readonly, nonatomic) NSString *mainArtistName;
@property(readonly, nonatomic) NSString *artistNames;
@property(readonly, nonatomic) NSURL *coverArtLink;
@property(readonly, nonatomic) NSString *albumName;
- (void)loadWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithOfflineManager:(id)arg1 albumURL:(id)arg2 username:(id)arg3 collectionPlatform:(id)arg4 alertInterface:(id)arg5 productState:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
