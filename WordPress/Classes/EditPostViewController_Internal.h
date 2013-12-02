//
//  EditPostViewController_Internal.h
//  WordPress
//
//  Created by Jorge Bernal on 1/24/13.
//  Copyright (c) 2013 WordPress. All rights reserved.
//

#import "EditPostViewController.h"
#import "PostSettingsViewController.h"
#import "PostMediaViewController.h"
#import "PostPreviewViewController.h"

extern NSString *const EditPostViewControllerDidAutosaveNotification;
extern NSString *const EditPostViewControllerAutosaveDidFailNotification;

@interface EditPostViewController ()
@property (nonatomic, strong) PostSettingsViewController *postSettingsViewController;
@property (nonatomic, strong) PostMediaViewController *postMediaViewController;
@property (nonatomic, strong) PostPreviewViewController *postPreviewViewController;
@property (nonatomic, assign) EditPostViewControllerMode editMode;
@property (nonatomic, strong) AbstractPost *apost;
@property (readonly) BOOL hasChanges;

@property (nonatomic, weak) IBOutlet UIButton *hasLocation;
@property (nonatomic, weak) IBOutlet UIToolbar *toolbar;
@property (nonatomic, weak) IBOutlet UIBarButtonItem *photoButton;
@property (nonatomic, weak) IBOutlet UIBarButtonItem *movieButton;
@property (nonatomic, weak) IBOutlet UIBarButtonItem *settingsButton;

- (BOOL)autosaveRemoteWithSuccess:(void (^)())success failure:(void (^)(NSError *error))failure;
- (void)refreshButtons;
- (void)refreshTags;
- (IBAction)switchToEdit;
- (IBAction)switchToSettings;
- (IBAction)switchToMedia;
- (IBAction)switchToPreview;
- (CGRect)normalTextFrame;
@end
