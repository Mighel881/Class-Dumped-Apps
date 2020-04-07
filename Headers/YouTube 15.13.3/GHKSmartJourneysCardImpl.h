//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/GHKSmartJourneysButtonDelegate-Protocol.h>
#import <Module_Framework/GHKSmartJourneysCard-Protocol.h>

@class NSLayoutConstraint, NSString, UILabel;
@protocol GHKSmartJourneysButton, GHKSmartJourneysCardDelegate;

@interface GHKSmartJourneysCardImpl : UIView <GHKSmartJourneysButtonDelegate, GHKSmartJourneysCard>
{
    NSLayoutConstraint *_widthConstraint;
    UIView *_titleSection;
    UILabel *_cardTitle;
    UILabel *_cardSubTitle;
    UIView *_buttonSection;
    id <GHKSmartJourneysButton> _contactUsButton;
    id <GHKSmartJourneysButton> _helpCommunityButton;
    id <GHKSmartJourneysCardDelegate> _delegate;
}

+ (id)createCardWithParamsBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id <GHKSmartJourneysCardDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapSmartJourneysButton:(id)arg1;
- (id)uiView;
- (void)setWidth:(double)arg1;
- (void)setUpConstraintsInButtonsSectionWithParams:(id)arg1;
- (void)setUpConstraintsInTitleSectionWithParams:(id)arg1;
- (void)setUpConstraintsWithParams:(id)arg1;
- (void)setUpSubViewsWithParams:(id)arg1;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
