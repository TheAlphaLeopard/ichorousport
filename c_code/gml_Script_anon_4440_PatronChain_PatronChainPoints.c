// gml_Script_anon_4440_PatronChain_PatronChainPoints @ 0x1404163b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_anon_4440_PatronChain_PatronChainPoints
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  uint local_res20;
  undefined8 uVar10;
  undefined8 **ppuVar11;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  longlong local_118;
  uint uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  
  local_100 = "gml_Script_patron_get_chain_points";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x57;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_e8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_13c = 0xffffff;
  plVar7 = (longlong *)0x0;
  local_148 = 0;
  local_res20 = 0xffffff;
  uStack_10c = 0xffffff;
  lVar8 = 0;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_14c = 0;
  local_158 = 0;
  local_8c = 0;
  local_98 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x59;
  puVar6 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1404164b5:
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_168);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != local_b8) goto LAB_1404164b5;
  }
  local_70 = local_b8;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_140416502:
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_168);
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
    if (puVar3 != &local_a8) goto LAB_140416502;
  }
  local_68 = &local_a8;
  uVar10 = CONCAT44(uVar9,DAT_141a01478);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_158,2,uVar10,&local_70);
  uVar9 = (undefined4)((ulonglong)uVar10 >> 0x20);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_f8 = 0x5b;
    puVar6 = (undefined8 *)FUN_140e8da20(&local_98,param_1,0);
    if (puVar6 != &local_148) {
      local_168 = *(undefined4 *)puVar6;
      uStack_164 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_160 = *(undefined4 *)(puVar6 + 1);
      uStack_15c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_168);
    }
    iVar5 = 4;
    do {
      iVar5 = iVar5 + -1;
      local_f8 = 0x5c;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_138 = 0;
      local_130 = 0;
      local_12c = 5;
      local_168 = _DAT_141dc6570;
      uStack_164 = uRam0000000141dc6574;
      uStack_160 = uRam0000000141dc6578;
      uStack_15c = uRam0000000141dc657c;
      if ((1 << ((byte)_local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_168);
      local_88 = &local_e8;
      local_168 = _DAT_141dc6570;
      uStack_164 = uRam0000000141dc6574;
      uStack_160 = uRam0000000141dc6578;
      uStack_15c = uRam0000000141dc657c;
      if ((1 << ((byte)_local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      FUN_140041b80(&local_d8,&local_168);
      local_80 = &local_d8;
      local_78 = &local_148;
      ppuVar11 = &local_88;
      puVar6 = (undefined8 *)FUN_14040fdc0(param_1,param_2,&local_138,2,ppuVar11);
      uVar9 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
      if (puVar6 != local_b8) {
        local_168 = *(undefined4 *)puVar6;
        uStack_164 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_160 = *(undefined4 *)(puVar6 + 1);
        uStack_15c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_168);
      }
      local_70 = local_b8;
      FUN_140e634e0(param_1,param_2,&local_158,2,CONCAT44(uVar9,DAT_1419fe568),&local_78);
    } while (0 < iVar5);
    local_f8 = 0x5d;
    if (&local_148 != param_3) {
      local_168 = (undefined4)local_148;
      uStack_164 = local_148._4_4_;
      uStack_160 = uStack_140;
      uStack_15c = uStack_13c;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_168);
    }
    goto LAB_14041678c;
  }
  local_f8 = 0x60;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1404168ae:
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_168);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_e8) goto LAB_1404168ae;
  }
  local_88 = &local_e8;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
LAB_1404168fb:
    local_168 = *(undefined4 *)puVar3;
    uStack_164 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_160 = *(undefined4 *)(puVar3 + 1);
    uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_168);
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
    if (puVar3 != &local_d8) goto LAB_1404168fb;
  }
  local_80 = &local_d8;
  plVar4 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_158,2,CONCAT44(uVar9,DAT_1419ff4f8),&local_88);
  if (plVar4 != &local_118) {
    local_168 = (undefined4)*plVar4;
    uStack_164 = *(undefined4 *)((longlong)plVar4 + 4);
    uStack_160 = (undefined4)plVar4[1];
    uStack_15c = *(undefined4 *)((longlong)plVar4 + 0xc);
    FUN_140041b80(&local_118,&local_168);
    local_res20 = uStack_10c;
    lVar8 = local_118;
  }
  local_f8 = 0x61;
  iVar5 = 0;
  if ((local_res20 == 2) && (lVar8 != 0)) {
    iVar5 = *(int *)(lVar8 + 0x24);
  }
  if (2 < param_4) {
    puVar6 = (undefined8 *)param_5[2];
  }
  if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
    uVar9 = (undefined4)*puVar6;
  }
  else {
    uVar9 = FUN_140e4b060(puVar6);
  }
  uVar2 = FUN_140e78ec0(uVar9,0,(double)(iVar5 + -1));
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 0;
  local_f8 = 99;
  local_128 = uVar2;
  iVar5 = FUN_140e4a740(&local_128);
  if (((local_res20 & 0xffffff) == 2) && (lVar8 != 0)) {
    if ((iVar5 < 0) || (*(int *)(lVar8 + 0x24) <= iVar5)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                    *(undefined4 *)(lVar8 + 0x24));
    }
    else {
      plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar8 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
    plVar7 = &local_118;
  }
  if (plVar7 != param_3) {
    local_168 = (undefined4)*plVar7;
    uStack_164 = *(undefined4 *)((longlong)plVar7 + 4);
    uStack_160 = (undefined4)plVar7[1];
    uStack_15c = *(undefined4 *)((longlong)plVar7 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_168);
  }
LAB_14041678c:
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_res20 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

