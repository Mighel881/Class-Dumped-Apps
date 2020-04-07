//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEUserMessage-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UILabel, UITableView, UIView;

@interface AWEIMGroupChatFollowUserViewController : UIViewController <AWEUserMessage, UITableViewDelegate, UITableViewDataSource>
{
    UIView *_maskView;
    UIView *_containerView;
    NSArray *_userArray;
    NSString *_conversationID;
    UITableView *_tableView;
    UILabel *_titleLabel;
    UIView *_topLine;
    UIView *_splitLine;
    NSMutableArray *_userIDArray;
    struct CGPoint _lastLocation;
}

+ (void)updateShownUids:(id)arg1 inConversation:(id)arg2;
+ (id)shownUidsInConversation:(id)arg1;
@property(nonatomic) struct CGPoint lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) NSMutableArray *userIDArray; // @synthesize userIDArray=_userIDArray;
@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(retain, nonatomic) NSArray *userArray; // @synthesize userArray=_userArray;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void).cxx_destruct;
- (double)containerViewH;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)selfPanned:(id)arg1;
- (void)p_removeView;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)p_setupUI;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
