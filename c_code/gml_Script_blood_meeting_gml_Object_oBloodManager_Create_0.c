// gml_Script_blood_meeting_gml_Object_oBloodManager_Create_0 @ 0x1406c07f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_blood_meeting_gml_Object_oBloodManager_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined1 *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  ulonglong local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  ulonglong local_d0;
  byte local_c4;
  ulonglong local_c0;
  byte local_b4;
  undefined1 local_b0 [12];
  byte local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  double local_90;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong *local_58;
  ulonglong *local_50;
  undefined1 *local_48;
  
  local_e0 = "gml_Script_pull_blood_splat@gml_Object_oBloodManager_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0x87;
  _eh_vector_constructor_iterator_(&local_d0,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_84 = 0xffffff;
  local_90 = 0.0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0x89;
  plVar2 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5bb8);
  iVar1 = 0;
  if ((*(int *)((longlong)plVar2 + 0xc) == 2) && (*plVar2 != 0)) {
    iVar1 = *(int *)(*plVar2 + 0x24);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  local_84 = 0;
  local_90 = (double)iVar1;
  local_d8 = 0x8b;
  uStack_130 = (ulonglong)(uint)uStack_130;
  local_138 = (undefined1 *)0x0;
  iVar1 = FUN_140e851f0(&local_90,&local_138,DAT_141955260,0);
  if ((1 << ((byte)(uStack_130 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar1 == 0) {
    local_d8 = 0x8c;
  }
  else {
    local_d8 = 0x8e;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_128 = 0;
    local_120 = 0;
    local_11c = 5;
    puVar7 = &DAT_1419df7b0;
    if (param_4 < 1) {
      puVar3 = &DAT_1419df7b0;
LAB_1406c09dc:
      local_138 = (undefined1 *)*puVar3;
      uStack_130 = puVar3[1];
      if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      FUN_140041b80(&local_d0,&local_138);
    }
    else {
      puVar3 = (ulonglong *)*param_5;
      if (puVar3 != &local_d0) goto LAB_1406c09dc;
    }
    local_58 = &local_d0;
    if ((param_4 < 2) || (puVar7 = (ulonglong *)param_5[1], puVar7 != &local_c0)) {
      local_138 = (undefined1 *)*puVar7;
      uStack_130 = puVar7[1];
      if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      FUN_140041b80(&local_c0,&local_138);
    }
    local_50 = &local_c0;
    local_138 = _DAT_1419e7800;
    uStack_130 = uRam00000001419e7808;
    if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b0);
    }
    FUN_140041b80(local_b0,&local_138);
    local_48 = local_b0;
    uVar5 = (int)(DAT_141a03718 | 0x5000000) >> 0x18 & 0xff;
    if (uVar5 == 0xf) {
      uVar6 = 0x4000004;
    }
    else {
      uVar6 = (ulonglong)(uVar5 | 0x1000000);
    }
    uStack_130 = CONCAT44(0xf,(uint)uStack_130);
    local_138 = (undefined1 *)(uVar6 << 0x20 | (ulonglong)(DAT_141a03718 & 0xffffff));
    puVar4 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_128,3,&local_138,&local_58);
    if (puVar4 != &local_108) {
      local_118 = *puVar4;
      uStack_110 = puVar4[1];
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_118);
    }
    if ((1 << ((byte)(uStack_130 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_d8 = 0x8f;
    plVar2 = param_1;
    uVar6 = param_2;
    FUN_140e87170(&local_108,DAT_141a0a828,0x80000000,&local_68,param_1,param_2);
    uStack_110 = CONCAT44(uStack_5c,uStack_60);
    local_118 = local_68;
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_118);
    local_d8 = 0x91;
    uStack_130 = uStack_130 & 0xffffffff;
    local_138 = &DAT_bff0000000000000;
    iVar1 = FUN_140e851f0(&local_108,&local_138,DAT_141955260,0);
    if ((1 << ((byte)(uStack_130 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (iVar1 != 0) {
      local_d8 = 0x94;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      puVar7 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5bb8);
      uVar8 = (ulonglong)plVar2 & 0xffffffffffffff00;
      FUN_140e87440(&local_108,DAT_141a57830,0x80000000,&local_78,uVar8,uVar6 & 0xffffffffffffff00);
      uVar9 = (undefined4)(uVar8 >> 0x20);
      if (puVar7 != &local_d0) {
        local_118 = *puVar7;
        uStack_110 = puVar7[1];
        if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d0);
        }
        FUN_140041b80(&local_d0,&local_118);
      }
      local_58 = &local_d0;
      uStack_110 = CONCAT44(uStack_6c,uStack_70);
      local_118 = local_78;
      if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c0);
      }
      FUN_140041b80(&local_c0,&local_118);
      local_50 = &local_c0;
      local_118 = _DAT_1419e7830;
      uStack_110 = uRam00000001419e7838;
      if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b0);
      }
      FUN_140041b80(local_b0,&local_118);
      local_48 = local_b0;
      FUN_140e634e0(param_1,param_2,&local_128,3,CONCAT44(uVar9,DAT_1419fd808),&local_58);
      local_d8 = 0x96;
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      local_94 = 10;
      local_a0 = 2;
      FUN_140e87930(&local_f8,DAT_141a0ab48,0x80000000,&local_a0);
      local_d8 = 0x98;
      if (&local_f8 != param_3) {
        uStack_110 = CONCAT44(uStack_ec,uStack_f0);
        local_118 = local_f8;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_118);
      }
      goto LAB_1406c0e00;
    }
    local_d8 = 0x92;
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0;
  *param_3 = &DAT_bff0000000000000;
LAB_1406c0e00:
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  _eh_vector_destructor_iterator_(&local_d0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

