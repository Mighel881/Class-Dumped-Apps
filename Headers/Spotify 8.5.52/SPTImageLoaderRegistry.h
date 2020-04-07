//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol SPTImageLoaderRequestFactory;

@interface SPTImageLoaderRegistry : NSObject
{
    NSArray *_imageProviderRegistrations;
    id <SPTImageLoaderRequestFactory> _defaultFactory;
}

@property(readonly, nonatomic) id <SPTImageLoaderRequestFactory> defaultFactory; // @synthesize defaultFactory=_defaultFactory;
@property(readonly) NSArray *imageProviderRegistrations; // @synthesize imageProviderRegistrations=_imageProviderRegistrations;
- (void).cxx_destruct;
- (id)imageRequestFactoryForURL:(id)arg1;
- (void)unregisterImageRequestFactories;
- (void)registerImageRequestFactory:(id)arg1 predicate:(CDUnknownBlockType)arg2;
- (id)init;

@end
