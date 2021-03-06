//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTDefaultColorStyle.h>

@class GIMMe, NSHashTable, UIColor, YTPageStyleController;

@interface YTAppColorStyle : YTDefaultColorStyle
{
    NSHashTable *_observers;
    UIColor *_themeColor;
    UIColor *_themeTitleColor;
    UIColor *_themeIconColor;
    YTPageStyleController *_pageStyleController;
    _Bool _themeColorChangeEnabled;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void)setThemeColorChangeEnabled:(_Bool)arg1;
- (_Bool)themeColorChangeEnabled;
- (void).cxx_destruct;
- (id)activityDotBorderColor;
- (id)activityDotColor;
- (id)darkForegroundIconColorForBackgroundColor:(id)arg1;
- (id)darkForegroundColorForBackgroundColor:(id)arg1;
- (id)tabActiveSelectionColorForStyleContext:(id)arg1;
- (id)tabTitleBackgroundColorForStyleContext:(id)arg1;
- (id)navigationBarSeparatorColorForStyleContext:(id)arg1;
- (id)navigationBarIconColorForStyleContext:(id)arg1;
- (id)navigationBarTitleColorForStyleContext:(id)arg1;
- (id)navigationBarColorForStyleContext:(id)arg1;
- (void)removeColorStyleObserver:(id)arg1;
- (void)addColorStyleObserver:(id)arg1;
- (void)setThemeColor:(id)arg1 titleColor:(id)arg2 animated:(_Bool)arg3;
- (void)setThemeColor:(id)arg1 animated:(_Bool)arg2;
- (id)themeIconColor;
- (id)themeTitleColor;
- (id)themeColor;
- (id)innerTubeCollectionViewBackgroundColor;
- (id)tabTitleTextColorsForStyleContext:(id)arg1;
- (id)tabsBackgroundColor;
- (id)titleBarTextColor;
- (id)titleBarColor;
- (id)navBarThemeColor;
- (id)init;

@end

