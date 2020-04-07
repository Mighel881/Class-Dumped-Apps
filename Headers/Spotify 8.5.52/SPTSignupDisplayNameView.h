//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLoginLoadingView.h"

#import "GLUEStyleable-Protocol.h"
#import "SPTSignupAnimatableViewProtocol-Protocol.h"

@class GLUELabel, NSLayoutConstraint, NSString, SPTLoginFormScrollView, SPTLoginInputFormView, SPTLoginLoadingActionButton, SPTSignupTermsAndPolicyView, UIView;

@interface SPTSignupDisplayNameView : SPTLoginLoadingView <GLUEStyleable, SPTSignupAnimatableViewProtocol>
{
    NSString *_transitionContextViewKey;
    SPTLoginLoadingActionButton *_submitButton;
    GLUELabel *_titleLabel;
    SPTLoginInputFormView *_formView;
    SPTSignupTermsAndPolicyView *_termsView;
    SPTLoginFormScrollView *_scrollView;
    UIView *_contentView;
    UIView *_mainContainer;
    NSLayoutConstraint *_titleLabelTopMargin;
    NSLayoutConstraint *_titleLabelEdgeMargin;
    NSLayoutConstraint *_formViewTopMargin;
    NSLayoutConstraint *_formViewHorizontalMargin;
    NSLayoutConstraint *_submitButtonTopMargin;
    NSLayoutConstraint *_termsViewMargin;
    NSLayoutConstraint *_contentViewBottomMargin;
    NSLayoutConstraint *_mainContainerCompactWidth;
    NSLayoutConstraint *_mainContainerRegularWidth;
    NSLayoutConstraint *_formHeight;
    double _animatableContentViewOriginalX;
}

@property(nonatomic) double animatableContentViewOriginalX; // @synthesize animatableContentViewOriginalX=_animatableContentViewOriginalX;
@property(retain, nonatomic) NSLayoutConstraint *formHeight; // @synthesize formHeight=_formHeight;
@property(retain, nonatomic) NSLayoutConstraint *mainContainerRegularWidth; // @synthesize mainContainerRegularWidth=_mainContainerRegularWidth;
@property(retain, nonatomic) NSLayoutConstraint *mainContainerCompactWidth; // @synthesize mainContainerCompactWidth=_mainContainerCompactWidth;
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomMargin; // @synthesize contentViewBottomMargin=_contentViewBottomMargin;
@property(retain, nonatomic) NSLayoutConstraint *termsViewMargin; // @synthesize termsViewMargin=_termsViewMargin;
@property(retain, nonatomic) NSLayoutConstraint *submitButtonTopMargin; // @synthesize submitButtonTopMargin=_submitButtonTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *formViewHorizontalMargin; // @synthesize formViewHorizontalMargin=_formViewHorizontalMargin;
@property(retain, nonatomic) NSLayoutConstraint *formViewTopMargin; // @synthesize formViewTopMargin=_formViewTopMargin;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelEdgeMargin; // @synthesize titleLabelEdgeMargin=_titleLabelEdgeMargin;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelTopMargin; // @synthesize titleLabelTopMargin=_titleLabelTopMargin;
@property(retain, nonatomic) UIView *mainContainer; // @synthesize mainContainer=_mainContainer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) SPTLoginFormScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) SPTSignupTermsAndPolicyView *termsView; // @synthesize termsView=_termsView;
@property(readonly, nonatomic) SPTLoginInputFormView *formView; // @synthesize formView=_formView;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)submitButton;
@property(retain, nonatomic) NSString *transitionContextViewKey; // @synthesize transitionContextViewKey=_transitionContextViewKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *animatableContentView;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints:(id)arg1;
- (id)initWithStyle:(id)arg1 frame:(struct CGRect)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
