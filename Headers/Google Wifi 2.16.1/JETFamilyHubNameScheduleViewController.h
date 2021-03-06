//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "JETSingleTextInputViewDelegate-Protocol.h"

@class GTLRAccesspoints_BlockingSchedule, JETAccessPointGroup, JETSingleTextInputView;
@protocol JETUserStateProtocol;

@interface JETFamilyHubNameScheduleViewController : UIViewController <JETSingleTextInputViewDelegate>
{
    id <JETUserStateProtocol> _userState;
    JETAccessPointGroup *_group;
    GTLRAccesspoints_BlockingSchedule *_schedule;
    JETSingleTextInputView *_nameView;
}

@property(nonatomic) __weak JETSingleTextInputView *nameView; // @synthesize nameView=_nameView;
@property(retain, nonatomic) GTLRAccesspoints_BlockingSchedule *schedule; // @synthesize schedule=_schedule;
@property(retain, nonatomic) JETAccessPointGroup *group; // @synthesize group=_group;
@property(retain, nonatomic) id <JETUserStateProtocol> userState; // @synthesize userState=_userState;
- (void).cxx_destruct;
- (void)didFinishEnteringText:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)navigationStyle;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithUserState:(id)arg1 group:(id)arg2 schedule:(id)arg3;

@end

