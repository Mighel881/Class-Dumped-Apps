//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCosmosImageLoaderService-Protocol.h"
#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTSpotifyImageRequestFactory;
@protocol CosmosFeature, SPTImageResolveService, SPTNetworkService;

@interface SPTCosmosImageLoaderServiceImplementation : NSObject <SPTService, SPTCosmosImageLoaderService>
{
    id <CosmosFeature> _cosmosService;
    id <SPTNetworkService> _networkService;
    id <SPTImageResolveService> _imageResolveService;
    SPTSpotifyImageRequestFactory *_spotifyImageRequestFactory;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTSpotifyImageRequestFactory *spotifyImageRequestFactory; // @synthesize spotifyImageRequestFactory=_spotifyImageRequestFactory;
@property(nonatomic) __weak id <SPTImageResolveService> imageResolveService; // @synthesize imageResolveService=_imageResolveService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <CosmosFeature> cosmosService; // @synthesize cosmosService=_cosmosService;
- (void).cxx_destruct;
- (void)registerCosmosImageRequestFactory;
- (void)registerLegacySpotifyImageRequestFactoryWithProductState:(id)arg1;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

