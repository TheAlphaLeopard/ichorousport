// gml_GlobalScript_HitFreeze @ 0x140293500

undefined8 *
gml_GlobalScript_HitFreeze
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar12;
  longlong lVar10;
  double dVar11;
  code *pcVar13;
  ulonglong uVar14;
  longlong **in_stack_fffffffffffffe10;
  double local_1e8;
  uint local_1dc;
  longlong local_1d8;
  longlong lStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  longlong local_1b8;
  uint local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  uint local_19c;
  longlong local_198;
  undefined4 local_18c;
  undefined8 local_188;
  char *local_180;
  undefined4 local_178;
  longlong local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  undefined4 local_14c;
  undefined4 local_148 [3];
  undefined4 local_13c;
  longlong local_138 [2];
  longlong local_128 [2];
  longlong local_118 [2];
  longlong local_108 [2];
  longlong local_f8 [2];
  longlong local_e8 [6];
  uint local_b8 [2];
  undefined8 *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  
  local_180 = "gml_Script_anon@3129@GuardPulse@GuardPulse";
  local_188 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_188;
  local_178 = 0x72;
  FUN_140041df0(local_b8,param_4,6,param_5);
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_138,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_1dc = 0xffffff;
  local_1e8 = 0.0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_178 = 0x72;
  puVar6 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_b8[0];
  if ((int)local_b8[0] < 5) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_b0[4];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_178 = 0x72;
    if (4 < (int)local_b8[0]) {
      puVar6 = (undefined8 *)local_b0[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0x3ff0000000000000;
  }
  puVar6 = &DAT_1419df7b0;
  if ((int)local_b8[0] < 6) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_b0[5];
  }
  iVar2 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    if (5 < (int)local_b8[0]) {
      puVar6 = (undefined8 *)local_b0[5];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0x3ff0000000000000;
  }
  local_178 = 0x73;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1dc = 0;
  local_1e8 = 0.0;
  bVar1 = true;
  do {
    iVar2 = 0;
    if (!bVar1) {
      local_178 = 0x73;
      uVar3 = local_1dc & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_1e8 = (double)CONCAT44(local_1e8._4_4_,local_1e8._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_1e8 = (double)((longlong)local_1e8 + 1);
          }
          else {
            if (uVar3 == 0xd) goto LAB_140293756;
            FUN_140042910(&DAT_14172c3d8,&local_1e8,&local_1e8);
          }
          goto LAB_140293764;
        }
        local_1e8 = (double)FUN_140e4b060(&local_1e8);
LAB_140293756:
        local_1dc = 0;
      }
      local_1e8 = local_1e8 + 1.0;
    }
LAB_140293764:
    bVar1 = false;
    plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a58100);
    if ((*(int *)((longlong)plVar4 + 0xc) == 2) && (*plVar4 != 0)) {
      iVar2 = *(int *)(*plVar4 + 0x24);
    }
    local_14c = 0;
    local_158 = (double)iVar2;
    iVar2 = FUN_140e851f0(&local_1e8,&local_158,DAT_141955260,1);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if (iVar2 == -2 || -1 < iVar2) {
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      _eh_vector_destructor_iterator_(local_138,0x10,8,FUN_140041b30);
      if (0 < (int)local_b8[0]) {
        puVar6 = local_b0;
        do {
          puVar5 = (undefined8 *)*puVar6;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *puVar5 = 0;
          *(undefined4 *)(puVar5 + 1) = 0;
          *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
          puVar6 = puVar6 + 1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      FUN_140e4cd60(local_b0);
      DAT_141dc7a50 = (undefined8 *)local_188;
      return param_3;
    }
    local_178 = 0x74;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a58100);
    iVar2 = FUN_140e4a740(&local_1e8);
    if (((*(uint *)((longlong)plVar4 + 0xc) & 0xffffff) == 2) && (lVar10 = *plVar4, lVar10 != 0)) {
      if ((iVar2 < 0) || (*(int *)(lVar10 + 0x24) <= iVar2)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                      *(undefined4 *)(lVar10 + 0x24));
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar10 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uVar14 = (ulonglong)pcVar13 & 0xffffffffffffff00;
    FUN_140e87440(plVar4,DAT_141a58020,0x80000000,&local_168,uVar14,
                  (ulonglong)in_stack_fffffffffffffe10 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar14 >> 0x20);
    lStack_1d0 = CONCAT44(uStack_15c,uStack_160);
    local_1d8 = local_168;
    if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_1d8);
    local_a8 = local_138;
    in_stack_fffffffffffffe10 = &local_a8;
    plVar4 = (longlong *)
             FUN_140e634e0(param_1,param_2,&local_1c8,1,CONCAT44(uVar8,DAT_1419fe728),
                           in_stack_fffffffffffffe10);
    if (plVar4 != &local_1b8) {
      local_1d8 = *plVar4;
      lStack_1d0 = plVar4[1];
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_1d8);
    }
    local_178 = 0x75;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a580c0);
    plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a580b0);
    local_19c = *(uint *)((longlong)puVar6 + 0xc);
    local_1a0 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
      local_1a8 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_1a8,puVar6);
    }
    local_13c = 7;
    local_148[0] = 1;
    FUN_1400462a0(&local_1a8,local_148);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    if ((local_19c & 0xffffff) == 0) {
      uVar8 = (undefined4)local_1a8;
      uVar12 = (undefined4)((ulonglong)local_1a8 >> 0x20);
    }
    else {
      uVar9 = FUN_140e4b060(&local_1a8);
      uVar8 = (undefined4)uVar9;
      uVar12 = (undefined4)((ulonglong)uVar9 >> 0x20);
    }
    if ((local_1ac & 0xffffff) == 0) {
      lVar10 = local_1b8;
    }
    else {
      lVar10 = FUN_140e4b060(&local_1b8);
    }
    dVar11 = (double)FUN_140e78ec0(lVar10,0,CONCAT44(uVar12,uVar8));
    iVar2 = (int)dVar11;
    if (((*(uint *)((longlong)plVar4 + 0xc) & 0xffffff) == 2) && (lVar10 = *plVar4, lVar10 != 0)) {
      if ((iVar2 < 0) || (*(int *)(lVar10 + 0x24) <= iVar2)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar2,
                      *(undefined4 *)(lVar10 + 0x24));
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = (longlong *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar10 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    if (plVar4 != &local_198) {
      local_1d8 = *plVar4;
      lStack_1d0 = plVar4[1];
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1d8);
    }
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_178 = 0x76;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    if ((int)local_b8[0] < 1) {
      plVar4 = &DAT_1419df7b0;
LAB_140293b37:
      local_1d8 = *plVar4;
      lStack_1d0 = plVar4[1];
      if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_1d8);
    }
    else {
      plVar4 = (longlong *)*local_b0;
      if (plVar4 != local_138) goto LAB_140293b37;
    }
    local_a8 = local_138;
    if ((int)local_b8[0] < 2) {
      plVar4 = &DAT_1419df7b0;
LAB_140293b8b:
      local_1d8 = *plVar4;
      lStack_1d0 = plVar4[1];
      if ((1 << ((byte)local_128[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_1d8);
    }
    else {
      plVar4 = (longlong *)local_b0[1];
      if (plVar4 != local_128) goto LAB_140293b8b;
    }
    local_a0 = local_128;
    if ((int)local_b8[0] < 3) {
      plVar4 = &DAT_1419df7b0;
LAB_140293bdf:
      local_1d8 = *plVar4;
      lStack_1d0 = plVar4[1];
      if ((1 << ((byte)local_118[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_1d8);
    }
    else {
      plVar4 = (longlong *)local_b0[2];
      if (plVar4 != local_118) goto LAB_140293bdf;
    }
    local_98 = local_118;
    if ((int)local_b8[0] < 4) {
      plVar4 = &DAT_1419df7b0;
LAB_140293c36:
      local_1d8 = *plVar4;
      lStack_1d0 = plVar4[1];
      if ((1 << ((byte)local_108[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_1d8);
    }
    else {
      plVar4 = (longlong *)local_b0[3];
      if (plVar4 != local_108) goto LAB_140293c36;
    }
    local_90 = local_108;
    if ((int)local_b8[0] < 5) {
      plVar4 = &DAT_1419df7b0;
LAB_140293c8d:
      local_1d8 = *plVar4;
      lStack_1d0 = plVar4[1];
      if ((1 << ((byte)local_f8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_1d8);
    }
    else {
      plVar4 = (longlong *)local_b0[4];
      if (plVar4 != local_f8) goto LAB_140293c8d;
    }
    local_88 = local_f8;
    if ((int)local_b8[0] < 6) {
      plVar4 = &DAT_1419df7b0;
LAB_140293ce4:
      local_1d8 = *plVar4;
      lStack_1d0 = plVar4[1];
      if ((1 << ((byte)local_e8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_1d8);
    }
    else {
      plVar4 = (longlong *)local_b0[5];
      if (plVar4 != local_e8) goto LAB_140293ce4;
    }
    local_80 = local_e8;
    local_78 = &local_1b8;
    local_70 = &local_198;
    pcVar13 = (code *)&local_a8;
    gml_Script_anon_2496_GuardPulse_GuardPulse(param_1,param_2,&local_1c8,8,pcVar13);
  } while( true );
}

