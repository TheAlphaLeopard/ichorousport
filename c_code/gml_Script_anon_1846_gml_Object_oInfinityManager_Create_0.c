// gml_Script_anon_1846_gml_Object_oInfinityManager_Create_0 @ 0x140b2dc50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1846_gml_Object_oInfinityManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  double *pdVar5;
  undefined8 *puVar6;
  double dVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  int local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  longlong local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  longlong *local_88;
  undefined8 *local_80;
  longlong *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@969@gml_Object_oInfinityManager_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x2e;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0;
  local_108 = 0;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x30;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 2) {
    plVar3 = &DAT_1419df7b0;
LAB_140b2dd3c:
    local_f8 = (undefined4)*plVar3;
    uStack_f4 = *(undefined4 *)((longlong)plVar3 + 4);
    uStack_f0 = (undefined4)plVar3[1];
    uStack_ec = *(undefined4 *)((longlong)plVar3 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_f8);
  }
  else {
    plVar3 = (longlong *)param_5[1];
    if (plVar3 != &local_a8) goto LAB_140b2dd3c;
  }
  local_78 = &local_a8;
  uVar4 = CONCAT44(uVar9,DAT_1419fd0c8);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,1,uVar4,&local_78);
  uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar2 != &local_d8) {
    local_f8 = *(undefined4 *)puVar2;
    uStack_f4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_f0 = *(undefined4 *)(puVar2 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_f8);
  }
  local_48 = 0x32;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  plVar3 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3ad8);
  if (plVar3 != &local_c8) {
    local_f8 = (undefined4)*plVar3;
    uStack_f4 = *(undefined4 *)((longlong)plVar3 + 4);
    uStack_f0 = (undefined4)plVar3[1];
    uStack_ec = *(undefined4 *)((longlong)plVar3 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_f8);
  }
  local_88 = &local_c8;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_140b2de6c:
    local_f8 = *(undefined4 *)puVar2;
    uStack_f4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_f0 = *(undefined4 *)(puVar2 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_f8);
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 != &local_b8) goto LAB_140b2de6c;
  }
  local_80 = &local_b8;
  uVar8 = CONCAT44(uVar9,DAT_141a01478);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_108,2,uVar8,&local_88);
  uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_48 = 0x3f;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    pdVar5 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3ad8);
    local_88 = &local_d8;
    if (0 < param_4) {
      puVar6 = (undefined8 *)*param_5;
    }
    if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
      dVar7 = *pdVar5;
    }
    else {
      dVar7 = (double)FUN_140e4b060(pdVar5);
    }
    uVar4 = FUN_140e634e0(param_1,param_2,&local_108,1,CONCAT44(uVar9,DAT_1419fdca8),&local_88);
    FUN_140ea8fb0((longlong)dVar7,puVar6,uVar4);
    goto LAB_140b2e314;
  }
  local_48 = 0x34;
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  local_68 = 0;
  local_60 = 0;
  local_5c = 5;
  plVar3 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3ad8);
  if (plVar3 != &local_a8) {
    local_f8 = (undefined4)*plVar3;
    uStack_f4 = *(undefined4 *)((longlong)plVar3 + 4);
    uStack_f0 = (undefined4)plVar3[1];
    uStack_ec = *(undefined4 *)((longlong)plVar3 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_f8);
  }
  local_78 = &local_a8;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
LAB_140b2df6b:
    local_f8 = *(undefined4 *)puVar2;
    uStack_f4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_f0 = *(undefined4 *)(puVar2 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_f8);
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 != &local_98) goto LAB_140b2df6b;
  }
  local_70 = &local_98;
  uVar4 = CONCAT44(uVar9,DAT_1419ff4f8);
  plVar3 = (longlong *)FUN_140e634e0(param_1,param_2,&local_68,2,uVar4,&local_78);
  uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (plVar3 != &local_e8) {
    local_f8 = (undefined4)*plVar3;
    uStack_f4 = *(undefined4 *)((longlong)plVar3 + 4);
    uStack_f0 = (undefined4)plVar3[1];
    uStack_ec = *(undefined4 *)((longlong)plVar3 + 0xc);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_f8);
  }
  if (((local_dc == 2) && (local_e8 != 0)) && (2 < *(int *)(local_e8 + 0x24))) {
    local_48 = 0x37;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    local_88 = &local_e8;
    local_f8 = _DAT_141dc71c0;
    uStack_f4 = uRam0000000141dc71c4;
    uStack_f0 = uRam0000000141dc71c8;
    uStack_ec = uRam0000000141dc71cc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_f8);
    local_80 = &local_b8;
    local_f8 = _DAT_1419ebd70;
    uStack_f4 = uRam00000001419ebd74;
    uStack_f0 = uRam00000001419ebd78;
    uStack_ec = uRam00000001419ebd7c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_f8);
    local_78 = &local_a8;
    uVar4 = CONCAT44(uVar9,DAT_1419fd808);
    FUN_140e634e0(param_1,param_2,&local_108,3,uVar4,&local_88);
    uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
  }
  local_48 = 0x3a;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  local_88 = &local_e8;
  local_80 = &local_d8;
  uVar4 = CONCAT44(uVar9,DAT_1419fe568);
  FUN_140e634e0(param_1,param_2,&local_108,2,uVar4,&local_88);
  uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_48 = 0x3b;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  plVar3 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f3ad8);
  if (plVar3 != &local_c8) {
    local_f8 = (undefined4)*plVar3;
    uStack_f4 = *(undefined4 *)((longlong)plVar3 + 4);
    uStack_f0 = (undefined4)plVar3[1];
    uStack_ec = *(undefined4 *)((longlong)plVar3 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_f8);
  }
  local_88 = &local_c8;
  if ((param_4 < 1) || (puVar6 = (undefined8 *)*param_5, puVar6 != &local_b8)) {
    local_f8 = *(undefined4 *)puVar6;
    uStack_f4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_f0 = *(undefined4 *)(puVar6 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_f8);
  }
  local_80 = &local_b8;
  local_78 = &local_e8;
  FUN_140e634e0(param_1,param_2,&local_108,3,CONCAT44(uVar9,DAT_141a00078),&local_88);
LAB_140b2e314:
  local_48 = 0x42;
  if (&local_d8 != param_3) {
    local_f8 = (undefined4)local_d8;
    uStack_f4 = local_d8._4_4_;
    uStack_f0 = uStack_d0;
    uStack_ec = uStack_cc;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_f8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

