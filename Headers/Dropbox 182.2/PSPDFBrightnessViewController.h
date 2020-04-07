//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PSPDFKitUI/PSPDFStaticTableViewController.h>

@class PSPDFAppearanceModeManager;

@interface PSPDFBrightnessViewController : PSPDFStaticTableViewController
{
    PSPDFAppearanceModeManager *_appearanceModeManager;
    unsigned long long _allowedAppearanceModes;
}

@property(nonatomic) unsigned long long allowedAppearanceModes; // @synthesize allowedAppearanceModes=_allowedAppearanceModes;
@property(retain, nonatomic) PSPDFAppearanceModeManager *appearanceModeManager; // @synthesize appearanceModeManager=_appearanceModeManager;
- (void).cxx_destruct;
- (id)createAppearanceModeSectionModel;
- (id)createBrightnessSectionModel;
- (void)updateSections;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1;

@end
