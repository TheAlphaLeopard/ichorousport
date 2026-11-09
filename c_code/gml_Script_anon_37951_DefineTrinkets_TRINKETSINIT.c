// gml_Script_anon_37951_DefineTrinkets_TRINKETSINIT @ 0x140614560

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_37951_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *local_res18;
  code *pcVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong in_stack_ffffffffffffff50;
  undefined1 **ppuVar8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@37278@DefineTrinkets@TRINKETSINIT";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x532;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_88,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x533;
  uStack_5c = 0xf;
  local_68 = 0x1000000000000ee;
  in_stack_ffffffffffffff50 = in_stack_ffffffffffffff50 & 0xffffffffffffff00;
  uVar6 = (ulonglong)pcVar5 & 0xffffffffffffff00;
  FUN_140e87440(&local_68,DAT_1419f5868,0x80000000,&local_98,uVar6,in_stack_ffffffffffffff50);
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140e87440(&local_98,DAT_1419f5848,0x80000000,&local_48,uVar6 & 0xffffffffffffff00,
                in_stack_ffffffffffffff50 & 0xffffffffffffff00);
  local_68 = CONCAT44(uRam0000000141dd4c0c,_DAT_141dd4c08);
  uStack_60 = uRam0000000141dd4c10;
  uStack_5c = DAT_141dd4c14;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_68);
  local_res18 = local_88;
  switch(local_8c) {
  default:
switchD_1406146ed_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_98;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_98 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1406146ed_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_98);
    uVar4 = FUN_140e87250(uVar3);
  }
  ppuVar8 = &local_res18;
  puVar7 = &local_48;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_a8,1,puVar7,ppuVar8);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_28 = 0x533;
  }
  else {
    local_28 = 0x534;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    uVar6 = (ulonglong)puVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419ffe18,0x80000000,&local_58,uVar6,
                  (ulonglong)ppuVar8 & 0xffffffffffffff00);
    uVar3 = (undefined4)(uVar6 >> 0x20);
    local_68 = local_58;
    uStack_60 = uStack_50;
    uStack_5c = uStack_4c;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_68);
    local_res18 = local_88;
    ppuVar8 = &local_res18;
    uVar6 = CONCAT44(uVar3,DAT_141a02ef8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_a8,1,uVar6,ppuVar8);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') {
      local_28 = 0x535;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      local_6c = 0;
      local_78 = 0x3ff0000000000000;
      FUN_140e87440(uVar4,DAT_1419ffe18,0x80000000,&local_58,uVar6 & 0xffffffffffffff00,
                    (ulonglong)ppuVar8 & 0xffffffffffffff00);
      FUN_140e87930(&local_58,DAT_1419ffdc8,0x80000000,&local_78);
    }
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

