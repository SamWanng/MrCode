//
//  NSString+Octicons.h
//  OcticonsIOS
//
//  Created by Jackson Harper on 9/24/13.
//  Copyright (c) 2013 SyntaxTree, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

static NSString *const kOcticonsFamilyName = @"Octicons";

typedef NS_ENUM(NSInteger, OCTIcon) {
	OCTIconAlert,
	OCTIconAlignmentAlign,
	OCTIconAlignmentAlignedTo,
	OCTIconAlignmentUnalign,
	OCTIconArrowDown,
	OCTIconArrowLeft,
	OCTIconArrowRight,
	OCTIconArrowSmallDown,
	OCTIconArrowSmallLeft,
	OCTIconArrowSmallRight,
	OCTIconArrowSmallUp,
	OCTIconArrowUp,
	OCTIconBeer,
	OCTIconBook,
	OCTIconBookmark,
	OCTIconBroadcast,
	OCTIconBug,
	OCTIconCalendar,
	OCTIconCheck,
	OCTIconChecklist,
	OCTIconChevronDown,
	OCTIconChevronLeft,
	OCTIconChevronRight,
	OCTIconChevronUp,
	OCTIconCircleSlash,
	OCTIconClippy,
	OCTIconClock,
	OCTIconCloudDownload,
	OCTIconCloudUpload,
	OCTIconCode,
	OCTIconColorMode,
	OCTIconComment,
	OCTIconCommentAdd,
	OCTIconCommentDiscussion,
	OCTIconCreditCard,
	OCTIconDashboard,
	OCTIconDatabase,
	OCTIconDeviceCamera,
	OCTIconDeviceCameraVideo,
	OCTIconDeviceDesktop,
	OCTIconDeviceMobile,
	OCTIconDiff,
	OCTIconDiffAdded,
	OCTIconDiffIgnored,
	OCTIconDiffModified,
	OCTIconDiffRemoved,
	OCTIconDiffRenamed,
	OCTIconEllipsis,
	OCTIconEye,
	OCTIconEyeUnwatch,
	OCTIconEyeWatch,
	OCTIconFileAdd,
	OCTIconFileBinary,
	OCTIconFileCode,
	OCTIconFileDirectory,
	OCTIconFileDirectoryCreate,
	OCTIconFileMedia,
	OCTIconFilePdf,
	OCTIconFileSubmodule,
	OCTIconFileSymlinkDirectory,
	OCTIconFileSymlinkFile,
	OCTIconFileText,
	OCTIconFileZip,
	OCTIconGear,
	OCTIconGift,
	OCTIconGist,
	OCTIconGistFork,
	OCTIconGistNew,
	OCTIconGistPrivate,
	OCTIconGistSecret,
	OCTIconGitBranch,
	OCTIconGitBranchCreate,
	OCTIconGitBranchDelete,
	OCTIconGitCommit,
	OCTIconGitCompare,
	OCTIconGitForkPrivate,
	OCTIconGitMerge,
	OCTIconGitPullRequest,
	OCTIconGitPullRequestAbandoned,
	OCTIconGlobe,
	OCTIconGraph,
	OCTIconHistory,
	OCTIconHome,
	OCTIconHorizontalRule,
	OCTIconHourglass,
	OCTIconHubot,
	OCTIconInfo,
	OCTIconIssueClosed,
	OCTIconIssueOpened,
	OCTIconIssueReopened,
	OCTIconJersey,
	OCTIconJumpDown,
	OCTIconJumpLeft,
	OCTIconJumpRight,
	OCTIconJumpUp,
	OCTIconKey,
	OCTIconKeyboard,
	OCTIconLightBulb,
	OCTIconLink,
	OCTIconLinkExternal,
	OCTIconListOrdered,
	OCTIconListUnordered,
	OCTIconLocation,
	OCTIconLock,
	OCTIconLogIn,
	OCTIconLogOut,
	OCTIconLogoGithub,
	OCTIconMail,
	OCTIconMailRead,
	OCTIconMailReply,
	OCTIconMarkGithub,
	OCTIconMarkTwitter,
	OCTIconMegaphone,
	OCTIconMicroscope,
	OCTIconMilestone,
	OCTIconMirrorPrivate,
	OCTIconMirrorPublic,
	OCTIconMoveDown,
	OCTIconMoveLeft,
	OCTIconMoveRight,
	OCTIconMoveUp,
	OCTIconMute,
	OCTIconNoNewline,
	OCTIconOctoface,
	OCTIconOrganization,
	OCTIconPencil,
	OCTIconPerson,
	OCTIconPersonAdd,
	OCTIconPersonFollow,
	OCTIconPersonRemove,
	OCTIconPin,
	OCTIconPlus,
	OCTIconPodium,
	OCTIconPrimitiveDot,
	OCTIconPrimitiveSquare,
	OCTIconPulse,
	OCTIconQuestion,
	OCTIconQuote,
	OCTIconRadioTower,
	OCTIconRemoveClose,
	OCTIconRepo,
	OCTIconRepoClone,
	OCTIconRepoCreate,
	OCTIconRepoDelete,
	OCTIconRepoForcePush,
	OCTIconRepoForked,
	OCTIconRepoPull,
	OCTIconRepoPush,
	OCTIconRepoSync,
	OCTIconRocket,
	OCTIconRss,
	OCTIconRuby,
	OCTIconScreenFull,
	OCTIconScreenNormal,
	OCTIconSearch,
	OCTIconServer,
	OCTIconSettings,
	OCTIconSquirrel,
	OCTIconStar,
	OCTIconStarAdd,
	OCTIconStarDelete,
	OCTIconStop,
	OCTIconSync,
	OCTIconTag,
	OCTIconTagAdd,
	OCTIconTagRemove,
	OCTIconTelescope,
	OCTIconThreeBars,
	OCTIconTools,
	OCTIconTriangleDown,
	OCTIconTriangleLeft,
	OCTIconTriangleRight,
	OCTIconTriangleUp,
	OCTIconUnfold,
	OCTIconVersions,
	OCTIconX,
	OCTIconZap,
};

@interface NSString (Octicons)

+ (NSString *)octicon_iconStringForEnum:(OCTIcon)value;
+ (NSString *)octicon_iconDescriptionForEnum:(OCTIcon)icon;
+ (OCTIcon)octicon_enumForIconIdentifier:(NSString *)string;
+ (NSString *)octicon_iconStringForIconIdentifier:(NSString*)identifier;

@end
