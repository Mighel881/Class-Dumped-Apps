//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWESettingBaseViewController.h"

#import "BTDRouterViewControllerProtocol-Protocol.h"

@class AWESettingBaseViewModel, NSMutableArray, NSString;

@interface AWELoginDeviceManageViewController : AWESettingBaseViewController <BTDRouterViewControllerProtocol>
{
    _Bool _hasRemovedDevice;
    AWESettingBaseViewModel *_viewModel;
    NSMutableArray *_deviceArray;
}

+ (void)__awe__codeRunnerRun_23;
@property(nonatomic) _Bool hasRemovedDevice; // @synthesize hasRemovedDevice=_hasRemovedDevice;
@property(retain, nonatomic) NSMutableArray *deviceArray; // @synthesize deviceArray=_deviceArray;
- (void).cxx_destruct;
- (id)viewModel;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
