// gml_Script_seg_meeting_mask @ 0x14049c420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_seg_meeting_mask
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined4 uVar12;
  undefined8 uVar11;
  longlong local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  longlong local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  undefined4 local_160;
  undefined4 local_15c;
  longlong local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong local_118;
  byte local_10c;
  longlong local_108;
  byte local_fc;
  longlong local_f8;
  byte local_ec;
  longlong local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  
  local_a0 = "gml_Script_seg_meeting_line";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 5;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0;
  local_198 = 0;
  local_12c = 0;
  local_138 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 7;
  if (param_4 < 1) {
    plVar6 = &DAT_1419df7b0;
LAB_14049c508:
    local_1b8 = *plVar6;
    uStack_1b0 = (undefined4)plVar6[1];
    uStack_1ac = *(undefined4 *)((longlong)plVar6 + 0xc);
    FUN_140041b80(&local_188,&local_1b8);
  }
  else {
    plVar6 = (longlong *)*param_5;
    if (plVar6 != &local_188) goto LAB_14049c508;
  }
  local_98 = 8;
  uStack_1ac = 0;
  local_1b8 = 0;
  iVar4 = FUN_140e851f0(&local_188,&local_1b8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if (iVar4 == -2 || -1 < iVar4) {
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    iVar4 = FUN_140e851f0(&local_188,uVar5,DAT_141955260,1);
    if ((iVar4 != -2) && (0 < iVar4)) goto LAB_14049c5b7;
  }
  else {
LAB_14049c5b7:
    local_98 = 8;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0f148);
    local_90 = &local_188;
    if (plVar6 != &local_108) {
      local_1b8 = *plVar6;
      uStack_1b0 = (undefined4)plVar6[1];
      uStack_1ac = *(undefined4 *)((longlong)plVar6 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_1b8);
    }
    local_88 = &local_108;
    uStack_1ac = DAT_141dd38a4;
    uStack_1b0 = DAT_141dd38a0;
    if ((1 << ((byte)DAT_141dd38a4 & 0x1f) & 0x46U) == 0) {
      local_1b8 = DAT_141dd3898;
    }
    else {
      FUN_1400419b0(&local_1b8,&DAT_141dd3898);
    }
    local_11c = DAT_141dd3894;
    local_120 = DAT_141dd3890;
    if ((1 << ((byte)DAT_141dd3894 & 0x1f) & 0x46U) == 0) {
      local_128 = DAT_141dd3888;
    }
    else {
      FUN_1400419b0(&local_128,&DAT_141dd3888);
    }
    uVar3 = local_11c;
    uVar2 = local_120;
    lVar1 = local_128;
    uVar11 = CONCAT44(uVar12,DAT_1419fcb18);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_138,1,uVar11,&local_90);
    uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uVar10 = 1 << ((byte)uVar3 & 0x1f) & 0x46;
    local_150 = uVar2;
    local_14c = uVar3;
    if (uVar10 == 0) {
      local_158 = lVar1;
    }
    else {
      FUN_1400419b0(&local_158,&local_128);
    }
    FUN_1400460e0(&local_158,uVar5);
    local_15c = local_14c;
    local_160 = local_150;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
      local_168 = local_158;
    }
    else {
      FUN_1400419b0(&local_168,&local_158);
    }
    FUN_1400460e0(&local_168,&local_1b8);
    uVar11 = CONCAT44(uVar12,DAT_1419fcb18);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar11,&local_88);
    uVar12 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uStack_16c = local_15c;
    uStack_170 = local_160;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) == 0) {
      local_178 = local_168;
    }
    else {
      FUN_1400419b0(&local_178,&local_168);
    }
    FUN_1400460e0(&local_178,uVar5);
    local_1a8 = (undefined4)local_178;
    uStack_1a4 = local_178._4_4_;
    uStack_1a0 = uStack_170;
    uStack_19c = uStack_16c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1a8);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if (uVar10 != 0) {
      FUN_140041a50(&local_128);
    }
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_80 = &local_f8;
    local_1a8 = _DAT_1419df7c0;
    uStack_1a4 = uRam00000001419df7c4;
    uStack_1a0 = uRam00000001419df7c8;
    uStack_19c = uRam00000001419df7cc;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1a8);
    uVar5 = CONCAT44(uVar12,DAT_141a010a8);
    local_78 = &local_e8;
    FUN_140e634e0(param_1,param_2,&local_198,2,uVar5,&local_80);
    uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  local_98 = 9;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  plVar8 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa28);
  plVar6 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0fa78);
  iVar4 = FUN_140e4a740(&local_188);
  if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar7 != &local_118) {
    local_1a8 = (undefined4)*plVar7;
    uStack_1a4 = *(undefined4 *)((longlong)plVar7 + 4);
    uStack_1a0 = (undefined4)plVar7[1];
    uStack_19c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1a8);
  }
  local_90 = &local_118;
  iVar4 = FUN_140e4a740(&local_188);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar7 = plVar8;
  }
  if (plVar7 != &local_108) {
    local_1a8 = (undefined4)*plVar7;
    uStack_1a4 = *(undefined4 *)((longlong)plVar7 + 4);
    uStack_1a0 = (undefined4)plVar7[1];
    uStack_19c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1a8);
  }
  local_88 = &local_108;
  uStack_16c = local_17c;
  uStack_170 = local_180;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
    local_178 = local_188;
  }
  else {
    FUN_1400419b0(&local_178,&local_188);
  }
  uStack_1ac = 7;
  local_1b8 = CONCAT44(local_1b8._4_4_,1);
  FUN_1400460e0(&local_178,&local_1b8);
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  iVar4 = FUN_140e4a740(&local_178);
  if (((*(uint *)((longlong)plVar6 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar6, lVar1 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar6 != &local_f8) {
    local_1a8 = (undefined4)*plVar6;
    uStack_1a4 = *(undefined4 *)((longlong)plVar6 + 4);
    uStack_1a0 = (undefined4)plVar6[1];
    uStack_19c = *(undefined4 *)((longlong)plVar6 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1a8);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_80 = &local_f8;
  iVar4 = FUN_140e4a740(&local_188);
  if (((*(uint *)((longlong)plVar8 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar8, lVar1 != 0)) {
    if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  if (plVar8 != &local_e8) {
    local_1a8 = (undefined4)*plVar8;
    uStack_1a4 = *(undefined4 *)((longlong)plVar8 + 4);
    uStack_1a0 = (undefined4)plVar8[1];
    uStack_19c = *(undefined4 *)((longlong)plVar8 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1a8);
  }
  if (param_4 < 2) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)param_5[1];
    local_78 = &local_e8;
    if (puVar9 == &local_d8) goto LAB_14049cd1a;
  }
  local_1a8 = *(undefined4 *)puVar9;
  uStack_1a4 = *(undefined4 *)((longlong)puVar9 + 4);
  uStack_1a0 = *(undefined4 *)(puVar9 + 1);
  uStack_19c = *(undefined4 *)((longlong)puVar9 + 0xc);
  local_78 = &local_e8;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_1a8);
LAB_14049cd1a:
  local_70 = &local_d8;
  local_1a8 = _DAT_1419df7a0;
  uStack_1a4 = uRam00000001419df7a4;
  uStack_1a0 = uRam00000001419df7a8;
  uStack_19c = uRam00000001419df7ac;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_1a8);
  local_68 = local_c8;
  local_1a8 = _DAT_1419df7c0;
  uStack_1a4 = uRam00000001419df7c4;
  uStack_1a0 = uRam00000001419df7c8;
  uStack_19c = uRam00000001419df7cc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_1a8);
  local_60 = local_b8;
  puVar9 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_198,7,CONCAT44(uVar12,DAT_1419f60a8),&local_90);
  if (puVar9 != param_3) {
    local_1a8 = *(undefined4 *)puVar9;
    uStack_1a4 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_1a0 = *(undefined4 *)(puVar9 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1a8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}

