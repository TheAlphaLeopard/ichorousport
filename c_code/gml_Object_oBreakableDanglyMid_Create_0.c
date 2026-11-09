// gml_Object_oBreakableDanglyMid_Create_0 @ 0x14085b5a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBreakableDanglyMid_Create_0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  undefined1 **ppuVar15;
  undefined8 local_218;
  undefined4 uStack_210;
  uint uStack_20c;
  double local_208;
  uint local_1fc;
  longlong *local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  double local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  double local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined8 local_188;
  byte local_17c;
  undefined8 local_178;
  byte local_16c;
  undefined8 local_168;
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  local_100 = "gml_Object_oBreakableDangly_Draw_0";
  local_f8 = 0;
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  _eh_vector_constructor_iterator_(local_198,0x10,9,FUN_1400424d0,FUN_140041b30);
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1fc = 0xffffff;
  local_208 = 0.0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_f8 = 2;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a3d8);
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a368);
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a398);
  uStack_20c = 0xf;
  local_218 = 7.291128972912498e-304;
  local_1f8 = (longlong *)0x1000001000000b5;
  uStack_1f0 = uStack_210;
  uStack_1ec = 0xf;
  if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_1f8);
  local_98 = local_198;
  if (puVar5 != &local_188) {
    local_218 = (double)*puVar5;
    uStack_210 = *(undefined4 *)(puVar5 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_218);
  }
  local_90 = &local_188;
  if (puVar6 != &local_178) {
    local_218 = (double)*puVar6;
    uStack_210 = *(undefined4 *)(puVar6 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_218);
  }
  local_88 = &local_178;
  if (puVar7 != &local_168) {
    local_218 = (double)*puVar7;
    uStack_210 = *(undefined4 *)(puVar7 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_218);
  }
  local_80 = &local_168;
  ppuVar15 = &local_98;
  FUN_1403afd30(param_1,param_2,&local_1e8,4,ppuVar15);
  local_f8 = 3;
  if (puVar6 != &local_1a8) {
    local_218 = (double)*puVar6;
    uStack_210 = *(undefined4 *)(puVar6 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_218);
  }
  local_f8 = 4;
  if (puVar7 != &local_1b8) {
    local_218 = (double)*puVar7;
    uStack_210 = *(undefined4 *)(puVar7 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_218);
  }
  local_f8 = 5;
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  local_1fc = 0;
  local_208 = 0.0;
  bVar2 = true;
  do {
    if (!bVar2) {
      local_f8 = 5;
      (**(code **)(*param_1 + 8))(param_1,DAT_141a0a368);
      (**(code **)(*param_1 + 8))(param_1,DAT_141a0a398);
      uVar3 = local_1fc & 0xffffff;
      if (uVar3 != 0) {
        if (uVar3 != 1) {
          if (uVar3 == 7) {
            local_208 = (double)CONCAT44(local_208._4_4_,local_208._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_208 = (double)((longlong)local_208 + 1);
          }
          else {
            if (uVar3 == 0xd) {
              local_1fc = 0;
              goto LAB_14085b96a;
            }
            FUN_140042910(&DAT_14172c3d8,&local_208,&local_208);
          }
          goto LAB_14085b974;
        }
        local_208 = (double)FUN_140e4b060(&local_208);
        local_1fc = 0;
      }
LAB_14085b96a:
      local_208 = local_208 + 1.0;
    }
LAB_14085b974:
    bVar2 = false;
    uVar8 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a3a8);
    iVar4 = FUN_140e851f0(&local_208,uVar8,DAT_141955260,1);
    if ((iVar4 == -2) || (-1 < iVar4)) {
      local_f8 = 10;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = 5;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a3a8);
      plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a358);
      uStack_1ec = 6;
      uVar14 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
      local_1f8 = param_1;
      FUN_140e87440(&local_1f8,DAT_141a0a728,0x80000000,&local_b8,uVar14,0);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      uStack_1ec = 6;
      uVar14 = uVar14 & 0xffffffffffffff00;
      local_1f8 = param_1;
      FUN_140e87440(&local_1f8,DAT_1419fe0e8,0x80000000,&local_c8,uVar14,0);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      uStack_1ec = 6;
      uVar14 = uVar14 & 0xffffffffffffff00;
      local_1f8 = param_1;
      FUN_140e87440(&local_1f8,DAT_1419fe158,0x80000000,&local_d8,uVar14,0);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      uStack_1ec = *(undefined4 *)((longlong)puVar5 + 0xc);
      uStack_1f0 = *(undefined4 *)(puVar5 + 1);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
        local_1f8 = (longlong *)*puVar5;
      }
      else {
        FUN_1400419b0(&local_1f8,puVar5);
      }
      uStack_20c = 7;
      local_218 = (double)CONCAT44(local_218._4_4_,1);
      FUN_1400462a0(&local_1f8,&local_218);
      if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      iVar4 = FUN_140e4a740(&local_1f8);
      if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
        if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      FUN_140e87440(plVar9,DAT_141a0a7f8,0x80000000,&local_e8,uVar14 & 0xffffffffffffff00,0);
      if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_218 = (double)local_b8;
      uStack_210 = uStack_b0;
      uStack_20c = uStack_ac;
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_218);
      local_98 = local_198;
      local_218 = (double)CONCAT44(uRam0000000141dc6ab4,_DAT_141dc6ab0);
      uStack_210 = uRam0000000141dc6ab8;
      uStack_20c = uRam0000000141dc6abc;
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_218);
      local_90 = &local_188;
      local_218 = (double)local_c8;
      uStack_210 = uStack_c0;
      uStack_20c = uStack_bc;
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_218);
      local_88 = &local_178;
      local_218 = (double)local_d8;
      uStack_210 = uStack_d0;
      uStack_20c = uStack_cc;
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_218);
      local_80 = &local_168;
      local_218 = (double)CONCAT44(uRam00000001419e8ff4,_DAT_1419e8ff0);
      uStack_210 = uRam00000001419e8ff8;
      uStack_20c = uRam00000001419e8ffc;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_218);
      local_78 = local_158;
      local_218 = (double)CONCAT44(uRam00000001419e8ff4,_DAT_1419e8ff0);
      uStack_210 = uRam00000001419e8ff8;
      uStack_20c = uRam00000001419e8ffc;
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      FUN_140041b80(local_148,&local_218);
      local_218 = (double)local_e8;
      uStack_210 = uStack_e0;
      uStack_20c = uStack_dc;
      local_70 = local_148;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_218);
      local_68 = local_138;
      local_218 = (double)CONCAT44(uRam00000001419e9004,_DAT_1419e9000);
      uStack_210 = uRam00000001419e9008;
      uStack_20c = uRam00000001419e900c;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_218);
      local_60 = local_128;
      local_218 = (double)CONCAT44(uRam00000001419e8ff4,_DAT_1419e8ff0);
      uStack_210 = uRam00000001419e8ff8;
      uStack_20c = uRam00000001419e8ffc;
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_218);
      local_58 = local_118;
      FUN_1403ae470(param_1,param_2,&local_1e8,9,&local_98);
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      _eh_vector_destructor_iterator_(local_198,0x10,9,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_108;
      return;
    }
    local_f8 = 6;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a358);
    iVar4 = FUN_140e4a740(&local_208);
    if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar10 = plVar9;
    }
    uVar14 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
    FUN_140e87440(plVar10,DAT_141a0a9f8,0x80000000,&local_a8,uVar14,0);
    iVar4 = FUN_140e4a740(&local_208);
    if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    FUN_140e87440(plVar9,DAT_141a0a7f8,0x80000000,&local_1d8,uVar14 & 0xffffffffffffff00,0);
    local_218 = (double)local_a8;
    uStack_210 = uStack_a0;
    uStack_20c = uStack_9c;
    if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_218);
    local_98 = local_198;
    local_218 = (double)CONCAT44(uRam0000000141dc6ab4,_DAT_141dc6ab0);
    uStack_210 = uRam0000000141dc6ab8;
    uStack_20c = uRam0000000141dc6abc;
    if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_218);
    local_90 = &local_188;
    local_88 = &local_1a8;
    local_80 = &local_1b8;
    local_218 = (double)CONCAT44(uRam00000001419e8ff4,_DAT_1419e8ff0);
    uStack_210 = uRam00000001419e8ff8;
    uStack_20c = uRam00000001419e8ffc;
    if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_218);
    local_78 = local_158;
    local_218 = (double)CONCAT44(uRam00000001419e8ff4,_DAT_1419e8ff0);
    uStack_210 = uRam00000001419e8ff8;
    uStack_20c = uRam00000001419e8ffc;
    if ((1 << ((byte)_local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_218);
    local_218 = local_1d8;
    uStack_210 = uStack_1d0;
    uStack_20c = uStack_1cc;
    local_70 = local_148;
    if ((1 << ((byte)_local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_218);
    local_68 = local_138;
    local_218 = (double)CONCAT44(uRam00000001419e9004,_DAT_1419e9000);
    uStack_210 = uRam00000001419e9008;
    uStack_20c = uRam00000001419e900c;
    if ((1 << ((byte)_local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_218);
    local_60 = local_128;
    local_218 = (double)CONCAT44(uRam00000001419e8ff4,_DAT_1419e8ff0);
    uStack_210 = uRam00000001419e8ff8;
    uStack_20c = uRam00000001419e8ffc;
    if ((1 << ((byte)_local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_218);
    local_58 = local_118;
    ppuVar15 = &local_98;
    FUN_1403ae470(param_1,param_2,&local_1e8,9,ppuVar15);
    local_f8 = 7;
    plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a358);
    iVar4 = FUN_140e4a740(&local_208);
    if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar10 = plVar9;
    }
    uVar14 = (ulonglong)ppuVar15 & 0xffffffffffffff00;
    FUN_140e87440(plVar10,DAT_1419fe5d8,0x80000000,&local_1c8,uVar14,0);
    iVar4 = FUN_140e4a740(&local_208);
    if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(plVar9,DAT_141a0a7f8,0x80000000,&local_1d8,uVar14,0);
    dVar12 = local_1d8;
    if ((uStack_1cc & 0xffffff) != 0) {
      dVar12 = (double)FUN_140e4b060(&local_1d8);
    }
    dVar13 = local_1c8;
    if ((local_1bc & 0xffffff) != 0) {
      dVar13 = (double)FUN_140e4b060(&local_1c8);
    }
    fVar11 = (float)FUN_140e78f90((float)dVar13,(float)dVar12);
    FUN_140162c50(&local_1a8,(double)fVar11);
    local_f8 = 8;
    plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a358);
    iVar4 = FUN_140e4a740(&local_208);
    if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar10 = plVar9;
    }
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(plVar10,DAT_1419fe5d8,0x80000000,&local_1c8,uVar14,0);
    iVar4 = FUN_140e4a740(&local_208);
    if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
      if ((iVar4 < 0) || (*(int *)(lVar1 + 0x24) <= iVar4)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar4,
                      *(undefined4 *)(lVar1 + 0x24));
        plVar9 = (longlong *)0x0;
      }
      else {
        plVar9 = (longlong *)((longlong)iVar4 * 0x10 + *(longlong *)(lVar1 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
    }
    ppuVar15 = (undefined1 **)(uVar14 & 0xffffffffffffff00);
    FUN_140e87440(plVar9,DAT_141a0a7f8,0x80000000,&local_1d8,ppuVar15,0);
    dVar12 = local_1d8;
    if ((uStack_1cc & 0xffffff) != 0) {
      dVar12 = (double)FUN_140e4b060(&local_1d8);
    }
    dVar13 = local_1c8;
    if ((local_1bc & 0xffffff) != 0) {
      dVar13 = (double)FUN_140e4b060(&local_1c8);
    }
    fVar11 = (float)FUN_140e79010((float)dVar13,(float)dVar12);
    FUN_140162c50(&local_1b8,(double)fVar11);
  } while( true );
}

