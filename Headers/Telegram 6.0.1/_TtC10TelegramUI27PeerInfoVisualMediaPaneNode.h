//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AsyncDisplayKit/ASDisplayNode.h>

#import <TelegramUI/UIScrollViewDelegate-Protocol.h>

@interface _TtC10TelegramUI27PeerInfoVisualMediaPaneNode : ASDisplayNode <UIScrollViewDelegate>
{
    // Error parsing type: , name: context
    // Error parsing type: , name: peerId
    // Error parsing type: , name: chatControllerInteraction
    // Error parsing type: , name: scrollNode
    // Error parsing type: , name: floatingHeaderNode
    // Error parsing type: , name: flashHeaderDelayTimer
    // Error parsing type: , name: isDeceleratingAfterTracking
    // Error parsing type: , name: _itemInteraction
    // Error parsing type: , name: currentParams
    // Error parsing type: , name: ready
    // Error parsing type: , name: didSetReady
    // Error parsing type: , name: listDisposable
    // Error parsing type: , name: hiddenMediaDisposable
    // Error parsing type: , name: mediaItems
    // Error parsing type: , name: visibleMediaItems
    // Error parsing type: , name: numberOfItemsToRequest
    // Error parsing type: , name: currentView
    // Error parsing type: , name: isRequestingView
    // Error parsing type: , name: isFirstHistoryView
    // Error parsing type: , name: decelerationAnimator
}

- (void).cxx_destruct;
- (id)initWithLayerBlock:(CDUnknownBlockType)arg1 didLoadBlock:(CDUnknownBlockType)arg2;
- (id)initWithViewBlock:(CDUnknownBlockType)arg1 didLoadBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)dealloc;

@end
