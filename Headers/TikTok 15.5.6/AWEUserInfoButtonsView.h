//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEUserInfoButtonsViewProtocol-Protocol.h"

@class NSString, UIButton;
@protocol AWEProfileHeaderActionControllerProtocol;

@interface AWEUserInfoButtonsView : UIView <AWEUserInfoButtonsViewProtocol>
{
    UIButton *_genderAndAgeButton;
    UIButton *_schoolButton;
    UIButton *_locationButton;
    id <AWEProfileHeaderActionControllerProtocol> _actionController;
}

+ (id)p_infoButtonFont;
+ (double)heightWithUser:(id)arg1;
@property(retain, nonatomic) id <AWEProfileHeaderActionControllerProtocol> actionController; // @synthesize actionController=_actionController;
@property(retain, nonatomic) UIButton *locationButton; // @synthesize locationButton=_locationButton;
@property(retain, nonatomic) UIButton *schoolButton; // @synthesize schoolButton=_schoolButton;
@property(retain, nonatomic) UIButton *genderAndAgeButton; // @synthesize genderAndAgeButton=_genderAndAgeButton;
- (void).cxx_destruct;
- (void)p_setupInfoButton:(id)arg1;
- (void)p_setGenderAndAgeContent;
- (_Bool)showInfoButtons:(id)arg1 maxWidth:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
