//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface T1DirectMessageConversationUpdate : NSObject
{
    _Bool _animated;
    CDUnknownBlockType _viewModelUpdateBlock;
    CDUnknownBlockType _userInterfaceUpdateBlock;
    CDUnknownBlockType _willUpdate;
    CDUnknownBlockType _didUpdate;
    unsigned long long _priority;
}

@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, copy, nonatomic) CDUnknownBlockType didUpdate; // @synthesize didUpdate=_didUpdate;
@property(readonly, copy, nonatomic) CDUnknownBlockType willUpdate; // @synthesize willUpdate=_willUpdate;
@property(readonly, copy, nonatomic) CDUnknownBlockType userInterfaceUpdateBlock; // @synthesize userInterfaceUpdateBlock=_userInterfaceUpdateBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType viewModelUpdateBlock; // @synthesize viewModelUpdateBlock=_viewModelUpdateBlock;
- (void).cxx_destruct;
- (void)coalesceUpdate:(id)arg1;
- (_Bool)canCoalesceUpdate:(id)arg1;
- (id)initWithViewModelUpdateBlock:(CDUnknownBlockType)arg1 userInterfaceUpdateBlock:(CDUnknownBlockType)arg2 willUpdate:(CDUnknownBlockType)arg3 didUpdate:(CDUnknownBlockType)arg4;

@end

