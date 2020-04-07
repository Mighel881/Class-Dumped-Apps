//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BulletContextInfo, BulletPackageRegistry, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol BulletKitGlobalSettingsProviderFactory, BulletReporter, BulletResourceLoader;

@interface BulletCoreConfiguration : NSObject
{
    BulletContextInfo *_contextInfo;
    id <BulletResourceLoader> _resourceLoader;
    id <BulletReporter> _reporter;
    CDUnknownBlockType _pipelineProvider;
    id <BulletKitGlobalSettingsProviderFactory> _globalSettingsProviderFactory;
    BulletPackageRegistry *_defaultPackageRegistry;
    NSMutableArray *_localKitApis;
    NSMutableDictionary *_localPackageRegistries;
}

@property(retain, nonatomic) NSMutableDictionary *localPackageRegistries; // @synthesize localPackageRegistries=_localPackageRegistries;
@property(retain, nonatomic) NSMutableArray *localKitApis; // @synthesize localKitApis=_localKitApis;
@property(retain, nonatomic) BulletPackageRegistry *defaultPackageRegistry; // @synthesize defaultPackageRegistry=_defaultPackageRegistry;
@property(retain, nonatomic) id <BulletKitGlobalSettingsProviderFactory> globalSettingsProviderFactory; // @synthesize globalSettingsProviderFactory=_globalSettingsProviderFactory;
@property(copy, nonatomic) CDUnknownBlockType pipelineProvider; // @synthesize pipelineProvider=_pipelineProvider;
@property(retain, nonatomic) id <BulletReporter> reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) id <BulletResourceLoader> resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(copy, nonatomic) BulletContextInfo *contextInfo; // @synthesize contextInfo=_contextInfo;
- (void).cxx_destruct;
- (void)registerPackage:(id)arg1 forKey:(id)arg2;
- (void)registerDefaultPackage:(id)arg1;
- (void)registerKitGlobalSettings:(id)arg1;
- (void)enableKitApi:(id)arg1;
@property(readonly, nonatomic) NSDictionary *packageRegistries;
@property(readonly, nonatomic) NSArray *kitApis;
- (id)init;

@end
