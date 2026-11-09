// gml_Script_anon_12797_BM_NEW_MENU_BYTEMAP_menu_manager @ 0x140254d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_12797_BM_NEW_MENU_BYTEMAP_menu_manager
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  byte local_res20;
  double local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  int local_6c;
  uint local_68 [2];
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@11199@BM_NEW_MENU@BYTEMAP_menu_manager";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x12f;
  FUN_140041df0(local_68,param_4,1,param_5);
  local_6c = 0xffffff;
  local_78 = 0;
  local_9c = 0xffffff;
  local_a8 = 0.0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_res20 = 0xff;
  uStack_8c = 0xffffff;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x12f;
  puVar6 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_60;
  }
  iVar1 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if ((iVar1 == 0) &&
     ((local_38 = 0x12f, (int)local_68[0] < 1 ||
      (puVar6 = (undefined8 *)*local_60, puVar6 != (undefined8 *)&DAT_141dce058)))) {
    local_58 = _DAT_141dce058;
    uStack_50 = uRam0000000141dce060;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_58);
  }
  local_38 = 0x131;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
  FUN_140e87440(uVar3,DAT_141a465e8,0x80000000,&local_78,0,0);
  iVar1 = 0;
  if ((local_6c == 2) && (local_78 != 0)) {
    iVar1 = *(int *)(local_78 + 0x24);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = (double)iVar1;
  local_38 = 0x133;
  if ((int)local_68[0] < 1) {
    puVar6 = &DAT_1419df7b0;
LAB_140254f50:
    local_58 = *puVar6;
    uStack_50 = puVar6[1];
    FUN_140041b80(&local_88,&local_58);
    uVar8 = uStack_7c;
  }
  else {
    puVar6 = (undefined8 *)*local_60;
    uVar8 = 0xffffff;
    if (puVar6 != &local_88) goto LAB_140254f50;
  }
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
  switch(*(undefined4 *)((longlong)puVar6 + 0xc)) {
  default:
switchD_140254f91_caseD_1:
    plVar5 = (longlong *)0x0;
    break;
  case 6:
    plVar5 = (longlong *)*puVar6;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)*puVar6 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_140254f91_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(puVar6);
    plVar5 = (longlong *)FUN_140e87250(uVar2);
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,DAT_141a465e8);
  uVar2 = FUN_140e4a740(&local_a8);
  puVar4 = (undefined8 *)FUN_140e48e40(puVar6,uVar2);
  FUN_140e609c0(*(undefined8 *)*puVar6);
  puVar6 = (undefined8 *)FUN_140e48e40(puVar4,0);
  FUN_140e609c0(*(undefined8 *)*puVar4);
  if (&local_88 != puVar6) {
    uStack_50 = CONCAT44(uStack_7c,uStack_80);
    local_58 = local_88;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_58);
  }
  FUN_140e60910(2);
  local_38 = 0x134;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a54f00);
  if (puVar6 != &local_98) {
    local_58 = *puVar6;
    uStack_50 = puVar6[1];
    FUN_140041b80(&local_98,&local_58);
    local_res20 = (byte)uStack_8c;
  }
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a54fa0);
  switch(*(undefined4 *)((longlong)puVar6 + 0xc)) {
  default:
switchD_1402550b2_caseD_1:
    plVar5 = (longlong *)0x0;
    break;
  case 6:
    plVar5 = (longlong *)*puVar6;
    break;
  case 0xf:
    iVar1 = (int)((ulonglong)*puVar6 >> 0x20);
    if ((iVar1 != 0x1000000) && (iVar1 != 0x4000001)) goto switchD_1402550b2_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar2 = FUN_140e4a8b0(puVar6);
    plVar5 = (longlong *)FUN_140e87250(uVar2);
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5,DAT_141a465e8);
  uVar2 = FUN_140e4a740(&local_a8);
  puVar4 = (undefined8 *)FUN_140e48e40(puVar6,uVar2);
  FUN_140e609c0(*(undefined8 *)*puVar6);
  puVar6 = (undefined8 *)FUN_140e48e40(puVar4,1);
  FUN_140e609c0(*(undefined8 *)*puVar4);
  if (&local_98 != puVar6) {
    uStack_50 = CONCAT44(uStack_8c,uStack_90);
    local_58 = local_98;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_58);
  }
  FUN_140e60910(2);
  local_38 = 0x138;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a55440);
  FUN_140e609c0(param_1);
  if (puVar6 != &DAT_1419df7b0) {
    local_58 = DAT_1419df7b0;
    uStack_50 = _DAT_1419df7b8;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x139;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a54f00);
  FUN_140e609c0(param_1);
  if (puVar6 != &DAT_1419df7b0) {
    local_58 = DAT_1419df7b0;
    uStack_50 = _DAT_1419df7b8;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x13a;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a55490);
  FUN_140e609c0(param_1);
  if (puVar6 != &DAT_1419df7b0) {
    local_58 = DAT_1419df7b0;
    uStack_50 = _DAT_1419df7b8;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x13b;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a550a0);
  FUN_140e609c0(param_1);
  if (puVar6 != &DAT_1419df7b0) {
    local_58 = DAT_1419df7b0;
    uStack_50 = _DAT_1419df7b8;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_58);
  }
  FUN_140e60910(1);
  local_38 = 0x13d;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar3 = FUN_140e5c910();
  FUN_140e42c10(uVar3,param_1);
  if ((1 << (local_res20 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (0 < (int)local_68[0]) {
    puVar6 = local_60;
    do {
      puVar4 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}

