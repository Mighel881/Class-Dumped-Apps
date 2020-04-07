//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWERNFile, NSDictionary, NSString, UIViewController;

@interface AWERNSegue : NSObject
{
    _Bool _needShareBridge;
    _Bool _navigationBarHidden;
    _Bool _backButtonHidden;
    _Bool _statusBarHidden;
    _Bool _popGestureEnable;
    _Bool _forceFallback;
    _Bool _singleBundle;
    _Bool _monitorEnabled;
    NSString *_channelName;
    NSString *_bundleName;
    NSString *_channel;
    NSString *_bundle;
    long long _dynamic;
    double _syncBuffer;
    NSString *_moduleName;
    NSString *_navigationTitle;
    NSString *_backgroundColor;
    long long _statusBarStyle;
    NSString *_fallbackSchema;
    NSDictionary *_originParams;
    NSString *_bundleURL;
    long long _openMode;
    NSString *_patchSourceURL;
    UIViewController *_sourceController;
    AWERNFile *_patchFile;
    CDUnknownBlockType _fallbackHandler;
    CDUnknownBlockType _reactControllerLoader;
}

+ (id)segueWithParams:(id)arg1;
+ (id)segueWithSourceController:(id)arg1 params:(id)arg2 reactControllerLoader:(CDUnknownBlockType)arg3 fallbackHandler:(CDUnknownBlockType)arg4;
+ (void)setParamsHandler:(id)arg1;
+ (id)paramsHandler;
@property(copy, nonatomic) CDUnknownBlockType reactControllerLoader; // @synthesize reactControllerLoader=_reactControllerLoader;
@property(copy, nonatomic) CDUnknownBlockType fallbackHandler; // @synthesize fallbackHandler=_fallbackHandler;
@property(retain, nonatomic) AWERNFile *patchFile; // @synthesize patchFile=_patchFile;
@property(nonatomic) __weak UIViewController *sourceController; // @synthesize sourceController=_sourceController;
@property(nonatomic) _Bool monitorEnabled; // @synthesize monitorEnabled=_monitorEnabled;
@property(nonatomic) _Bool singleBundle; // @synthesize singleBundle=_singleBundle;
@property(copy, nonatomic) NSString *patchSourceURL; // @synthesize patchSourceURL=_patchSourceURL;
@property(nonatomic) long long openMode; // @synthesize openMode=_openMode;
@property(retain, nonatomic) NSString *bundleURL; // @synthesize bundleURL=_bundleURL;
@property(retain, nonatomic) NSDictionary *originParams; // @synthesize originParams=_originParams;
@property(copy, nonatomic) NSString *fallbackSchema; // @synthesize fallbackSchema=_fallbackSchema;
@property(nonatomic) _Bool forceFallback; // @synthesize forceFallback=_forceFallback;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(copy, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool popGestureEnable; // @synthesize popGestureEnable=_popGestureEnable;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) _Bool backButtonHidden; // @synthesize backButtonHidden=_backButtonHidden;
@property(copy, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(nonatomic) _Bool needShareBridge; // @synthesize needShareBridge=_needShareBridge;
@property(nonatomic) double syncBuffer; // @synthesize syncBuffer=_syncBuffer;
@property(nonatomic) long long dynamic; // @synthesize dynamic=_dynamic;
@property(copy, nonatomic) NSString *bundle; // @synthesize bundle=_bundle;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(copy, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
- (void).cxx_destruct;
- (id)reactController;
- (void)fallback;
- (_Bool)canFallback;
- (_Bool)canDynamicOpenRN:(id *)arg1;
- (_Bool)canOpenRN;
- (_Bool)canOpenRN:(id *)arg1;
- (_Bool)isVaild;

@end
