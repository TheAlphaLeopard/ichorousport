// gml_Script_imgui_drawlist_flags_get @ 0x1404c0880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_imgui_drawlist_flags_get
          (longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  double *pdVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  double dVar9;
  code *pcVar10;
  undefined4 uVar11;
  ulonglong in_stack_fffffffffffffed0;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  longlong local_b8;
  byte local_ac;
  longlong local_a8;
  byte local_9c;
  longlong local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  longlong local_78;
  byte local_6c;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 *local_50;
  longlong *local_48;
  
  local_d0 = "gml_Script_imgui_drawlist_push_textureid";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x56f;
  if (DAT_141dc7a60 == 0) {
    DAT_141dc7a60 = FUN_140e63aa0(DAT_141a57070);
  }
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_10c = 0;
  local_118 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x570;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fb6b8);
  uStack_11c = 6;
  local_128 = DAT_141dc7a60;
  in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
  uVar3 = (ulonglong)pcVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_128,DAT_1419fb048,0x80000000,&local_e8,uVar3,in_stack_fffffffffffffed0);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  uVar3 = uVar3 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_1419fac58,0x80000000,&local_f8,uVar3,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar3 >> 0x20);
  uVar3 = FUN_140e4a8b0(&local_e8);
  uVar4 = FUN_140e4a8b0(&local_f8);
  plVar8 = &DAT_1419df7b0;
  if ((longlong)(uVar3 & uVar4) < 1) {
    local_c8 = 0x570;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    local_128 = CONCAT44(uRam0000000141dc6694,_DAT_141dc6690);
    uStack_120 = uRam0000000141dc6698;
    uStack_11c = uRam0000000141dc669c;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_128);
    local_50 = local_88;
    if (param_4 < 3) {
      pdVar6 = (double *)&DAT_1419df7b0;
    }
    else {
      pdVar6 = (double *)param_5[2];
    }
    if ((*(uint *)((longlong)pdVar6 + 0xc) & 0xffffff) == 0) {
      dVar9 = *pdVar6;
    }
    else {
      dVar9 = (double)FUN_140e4b060();
    }
    if (param_4 < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)param_5[1];
    }
    uVar1 = FUN_140e4a740(puVar7);
    plVar5 = (longlong *)FUN_140ec6010(&local_108,uVar1,(longlong)dVar9);
    if (plVar5 != &local_78) {
      local_128 = *plVar5;
      uStack_120 = (undefined4)plVar5[1];
      uStack_11c = *(undefined4 *)((longlong)plVar5 + 0xc);
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_128);
    }
    local_48 = &local_78;
    uVar2 = CONCAT44(uVar11,DAT_1419f5468);
    FUN_140e634e0(param_1,param_2,&local_118,2,uVar2,&local_50);
    uVar11 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  local_c8 = 0x571;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  if (param_4 < 1) {
    plVar5 = &DAT_1419df7b0;
LAB_1404c0bbe:
    local_128 = *plVar5;
    uStack_120 = (undefined4)plVar5[1];
    uStack_11c = *(undefined4 *)((longlong)plVar5 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_128);
  }
  else {
    plVar5 = (longlong *)*param_5;
    if (plVar5 != &local_b8) goto LAB_1404c0bbe;
  }
  local_68 = &local_b8;
  if (param_4 < 2) {
    plVar5 = &DAT_1419df7b0;
  }
  else {
    plVar5 = (longlong *)param_5[1];
    if (plVar5 == &local_a8) goto LAB_1404c0c39;
  }
  local_128 = *plVar5;
  uStack_120 = (undefined4)plVar5[1];
  uStack_11c = *(undefined4 *)((longlong)plVar5 + 0xc);
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_128);
LAB_1404c0c39:
  local_60 = &local_a8;
  if ((param_4 < 3) || (plVar8 = (longlong *)param_5[2], plVar8 != &local_98)) {
    local_128 = *plVar8;
    uStack_120 = (undefined4)plVar8[1];
    uStack_11c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_128);
  }
  local_58 = &local_98;
  plVar8 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_118,3,CONCAT44(uVar11,DAT_141a59730),&local_68);
  if (plVar8 != param_3) {
    local_128 = *plVar8;
    uStack_120 = (undefined4)plVar8[1];
    uStack_11c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_128);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

