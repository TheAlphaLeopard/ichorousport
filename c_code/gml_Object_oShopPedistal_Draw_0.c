// gml_Object_oShopPedistal_Draw_0 @ 0x140d70240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oShopPedistal_Draw_0(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  code *pcVar12;
  ulonglong uVar13;
  ulonglong in_stack_fffffffffffffe80;
  undefined8 **ppuVar14;
  ulonglong uVar15;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  byte local_13c;
  double local_138;
  undefined4 local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined8 local_118;
  undefined4 local_110;
  uint local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined8 *local_f8;
  double *local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  
  local_d8 = "gml_Object_oShopPedistal_Step_0";
  local_d0 = 0;
  local_e0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e0;
  pcVar12 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_148,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_6c = 0xffffff;
  local_78 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_d0 = 2;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57b30);
  uStack_160 = (ulonglong)(uint)uStack_160;
  local_168 = (longlong *)&DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(uVar4,&local_168,DAT_141955260,0);
  if ((1 << ((byte)(uStack_160 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if (iVar2 == 0) {
    local_d0 = 4;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
    uStack_170._4_4_ = 0xd;
    local_178 = (longlong *)0x0;
    local_168 = (longlong *)0x0;
    uStack_160._0_4_ = (uint)uStack_170;
    uStack_160._4_4_ = 0xd;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_168);
    FUN_140e87930(uVar3,DAT_141a0d3e8,0x80000000,&local_c8);
    local_d0 = 5;
  }
  else {
    local_d0 = 9;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    if ((*(uint *)((longlong)puVar5 + 0xc) & 0xffffff) == 0) {
      uVar10 = (undefined4)*puVar5;
    }
    else {
      uVar10 = FUN_140e4b060(puVar5);
    }
    dVar1 = (double)FUN_140e78d00(uVar10);
    if (dVar1 - 0.2 < -DAT_141955260) {
      local_d0 = 0xb;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09918);
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a065f8);
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09918);
      uStack_160._4_4_ = 6;
      uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
      local_168 = param_1;
      FUN_140e87440(&local_168,DAT_1419fe0e8,0x80000000,&local_108,uVar13,
                    in_stack_fffffffffffffe80 & 0xffffffffffffff00);
      uVar10 = (undefined4)(uVar13 >> 0x20);
      if ((1 << ((byte)uStack_160._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if (puVar6 != &local_148) {
        local_178 = (longlong *)*puVar6;
        uStack_170 = puVar6[1];
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_178);
      }
      local_f8 = &local_148;
      local_ac = *(undefined4 *)((longlong)puVar7 + 0xc);
      local_b0 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
        local_b8 = (longlong *)*puVar7;
      }
      else {
        FUN_1400419b0(&local_b8,puVar7);
      }
      uStack_170._4_4_ = 7;
      local_178 = (longlong *)CONCAT44(local_178._4_4_,0x14);
      FUN_1400460e0(&local_b8,&local_178);
      if ((1 << ((byte)uStack_170._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      uStack_160 = CONCAT44(local_ac,local_b0);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
        local_168 = local_b8;
      }
      else {
        FUN_1400419b0(&local_168,&local_b8);
      }
      uStack_170 = (ulonglong)(uint)uStack_170;
      local_178 = (longlong *)0xbf847ae147ae147b;
      FUN_140042560(&local_168,&local_178);
      if ((1 << ((byte)(uStack_170 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_10c = uStack_fc;
      local_110 = uStack_100;
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
        local_118 = local_108;
      }
      else {
        FUN_1400419b0(&local_118,&local_108);
      }
      FUN_1400460e0(&local_118,&local_168);
      if ((local_10c & 0xffffff) == 0) {
        uVar11 = (undefined4)local_118;
      }
      else {
        uVar11 = FUN_140e4b060(&local_118);
      }
      local_138 = (double)thunk_FUN_1412aae80(uVar11);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_12c = 0;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)(uStack_160 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      local_f0 = &local_138;
      local_178 = (longlong *)CONCAT44(uRam00000001419edc94,_DAT_1419edc90);
      uStack_170 = CONCAT44(uRam00000001419edc9c,uRam00000001419edc98);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_178);
      local_e8 = local_128;
      FUN_140e609c0(param_1);
      ppuVar14 = &local_f8;
      uVar13 = CONCAT44(uVar10,DAT_141a00c58);
      puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar13,ppuVar14);
      if (puVar6 != puVar8) {
        local_178 = (longlong *)*puVar6;
        uStack_170 = puVar6[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        FUN_140041b80(puVar8,&local_178);
      }
      FUN_140e60910(1);
      local_d0 = 0xc;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09a78);
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09a78);
      uStack_170._4_4_ = 6;
      uVar13 = uVar13 & 0xffffffffffffff00;
      local_178 = param_1;
      FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_108,uVar13,
                    (ulonglong)ppuVar14 & 0xffffffffffffff00);
      uVar10 = (undefined4)(uVar13 >> 0x20);
      if ((1 << ((byte)uStack_170._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      if (puVar6 != &local_148) {
        local_178 = (longlong *)*puVar6;
        uStack_170._0_4_ = *(uint *)(puVar6 + 1);
        uStack_170._4_4_ = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_178);
      }
      local_f8 = &local_148;
      uStack_160 = puVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) == 0) {
        local_168 = (longlong *)*puVar7;
      }
      else {
        FUN_1400419b0(&local_168,puVar7);
      }
      uStack_170 = (ulonglong)(uint)uStack_170;
      local_178 = (longlong *)0xbf847ae147ae147b;
      FUN_140042560(&local_168,&local_178);
      if ((1 << ((byte)(uStack_170 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_10c = uStack_fc;
      local_110 = uStack_100;
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) == 0) {
        local_118 = local_108;
      }
      else {
        FUN_1400419b0(&local_118,&local_108);
      }
      FUN_1400460e0(&local_118,&local_168);
      if ((local_10c & 0xffffff) == 0) {
        uVar11 = (undefined4)local_118;
      }
      else {
        uVar11 = FUN_140e4b060(&local_118);
      }
      dVar1 = (double)thunk_FUN_1412ac390(uVar11);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_12c = 0;
      local_138 = dVar1 * 2.0;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      if ((1 << ((byte)(uStack_160 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_f0 = &local_138;
      local_178 = (longlong *)CONCAT44(uRam00000001419edc94,_DAT_1419edc90);
      uStack_170 = CONCAT44(uRam00000001419edc9c,uRam00000001419edc98);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_178);
      local_e8 = local_128;
      FUN_140e609c0(param_1);
      ppuVar14 = &local_f8;
      uVar13 = CONCAT44(uVar10,DAT_141a00c58);
      puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar13,ppuVar14);
      if (puVar6 != puVar8) {
        local_178 = (longlong *)*puVar6;
        uStack_170 = puVar6[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        FUN_140041b80(puVar8,&local_178);
      }
      FUN_140e60910(1);
      local_d0 = 0xe;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
      uStack_170._4_4_ = 6;
      uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      local_178 = param_1;
      FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_108,uVar13,uVar15);
      if ((1 << ((byte)uStack_170._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = (longlong *)local_108;
      uStack_170 = CONCAT44(uStack_fc,uStack_100);
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_178);
      (**(code **)(*param_1 + 8))(param_1,DAT_141a065f8);
      FUN_140e86c30(uVar4,DAT_1419fe0e8,0x80000000,&local_88);
      local_d0 = 0xf;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff598);
      uStack_170._4_4_ = 6;
      pcVar12 = (code *)(uVar13 & 0xffffffffffffff00);
      local_178 = param_1;
      FUN_140e87440(&local_178,DAT_1419fe158,0x80000000,&local_a8,pcVar12,
                    uVar15 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_170._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      uStack_160 = CONCAT44(local_9c,local_a0);
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
        local_168 = local_a8;
      }
      else {
        FUN_1400419b0(&local_168,&local_a8);
      }
      FUN_1400460e0(&local_168,uVar4);
      local_178 = local_168;
      uStack_170 = uStack_160;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_178);
      if ((1 << ((byte)(uStack_160 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
      FUN_140e86c30(uVar4,DAT_1419fe158,0x80000000,&local_98);
      local_d0 = 0x11;
      uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a065f8);
      FUN_140046040(uVar4);
    }
    uVar10 = (undefined4)((ulonglong)pcVar12 >> 0x20);
    local_d0 = 0x15;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    if (puVar5 != &local_148) {
      local_178 = (longlong *)*puVar5;
      uStack_170 = puVar5[1];
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_178);
    }
    local_f8 = &local_148;
    local_178 = (longlong *)CONCAT44(uRam0000000141dc76d4,_DAT_141dc76d0);
    uStack_170 = CONCAT44(uRam0000000141dc76dc,uRam0000000141dc76d8);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
    local_f0 = &local_138;
    local_178 = (longlong *)CONCAT44(uRam00000001419edc94,_DAT_1419edc90);
    uStack_170 = CONCAT44(uRam00000001419edc9c,uRam00000001419edc98);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_178);
    local_e8 = local_128;
    FUN_140e609c0(param_1);
    uVar4 = CONCAT44(uVar10,DAT_141a00c58);
    puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar4,&local_f8);
    uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar7 != puVar6) {
      local_178 = (longlong *)*puVar7;
      uStack_170 = puVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_178);
    }
    FUN_140e60910(1);
    local_d0 = 0x16;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    if (puVar6 != &local_148) {
      local_178 = (longlong *)*puVar6;
      uStack_170 = puVar6[1];
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_178);
    }
    local_f8 = &local_148;
    local_178 = (longlong *)CONCAT44(uRam0000000141dc76d4,_DAT_141dc76d0);
    uStack_170 = CONCAT44(uRam0000000141dc76dc,uRam0000000141dc76d8);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
    local_f0 = &local_138;
    local_178 = (longlong *)CONCAT44(uRam00000001419edc94,_DAT_1419edc90);
    uStack_170 = CONCAT44(uRam00000001419edc9c,uRam00000001419edc98);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_178);
    local_e8 = local_128;
    FUN_140e609c0(param_1);
    uVar4 = CONCAT44(uVar10,DAT_141a00c58);
    puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar4,&local_f8);
    uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar8 != puVar7) {
      local_178 = (longlong *)*puVar8;
      uStack_170 = puVar8[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_178);
    }
    FUN_140e60910(1);
    local_d0 = 0x18;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
    if (puVar7 != &local_148) {
      local_178 = (longlong *)*puVar7;
      uStack_170 = puVar7[1];
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_178);
    }
    local_f8 = &local_148;
    local_178 = (longlong *)CONCAT44(uRam00000001419edcb4,_DAT_1419edcb0);
    uStack_170 = CONCAT44(uRam00000001419edcbc,uRam00000001419edcb8);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
    local_f0 = &local_138;
    local_178 = (longlong *)CONCAT44(uRam00000001419edca4,_DAT_1419edca0);
    uStack_170 = CONCAT44(uRam00000001419edcac,uRam00000001419edca8);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_178);
    local_e8 = local_128;
    FUN_140e609c0(param_1);
    uVar4 = CONCAT44(uVar10,DAT_141a00c58);
    puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar4,&local_f8);
    uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar7 != puVar8) {
      local_178 = (longlong *)*puVar7;
      uStack_170 = puVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_178);
    }
    FUN_140e60910(1);
    local_d0 = 0x19;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a858);
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
    if (puVar7 != &local_148) {
      local_178 = (longlong *)*puVar7;
      uStack_170 = puVar7[1];
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_178);
    }
    local_f8 = &local_148;
    local_178 = (longlong *)CONCAT44(uRam00000001419edcb4,_DAT_1419edcb0);
    uStack_170 = CONCAT44(uRam00000001419edcbc,uRam00000001419edcb8);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
    local_f0 = &local_138;
    local_178 = (longlong *)CONCAT44(uRam00000001419edca4,_DAT_1419edca0);
    uStack_170 = CONCAT44(uRam00000001419edcac,uRam00000001419edca8);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_178);
    local_e8 = local_128;
    FUN_140e609c0(param_1);
    ppuVar14 = &local_f8;
    uVar13 = CONCAT44(uVar10,DAT_141a00c58);
    puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,3,uVar13,ppuVar14);
    if (puVar7 != puVar8) {
      local_178 = (longlong *)*puVar7;
      uStack_170 = puVar7[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_178);
    }
    FUN_140e60910(1);
    local_d0 = 0x1b;
    uStack_170._4_4_ = 6;
    uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    local_178 = param_1;
    FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_68,uVar13,uVar15);
    if ((1 << ((byte)uStack_170._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    uStack_160._4_4_ = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_160._0_4_ = *(uint *)(puVar5 + 1);
    if ((1 << ((byte)uStack_160._4_4_ & 0x1f) & 0x46U) == 0) {
      local_168 = (longlong *)*puVar5;
    }
    else {
      FUN_1400419b0(&local_168,puVar5);
    }
    FUN_140042560(&local_168,uVar3);
    FUN_1400460e0(&local_68,&local_168);
    if ((1 << ((byte)uStack_160._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_68);
    local_d0 = 0x1c;
    uStack_170._4_4_ = 6;
    local_178 = param_1;
    FUN_140e87440(&local_178,DAT_1419fe158,0x80000000,&local_78,uVar13 & 0xffffffffffffff00,
                  uVar15 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_170._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    uStack_160._4_4_ = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_160._0_4_ = *(uint *)(puVar6 + 1);
    if ((1 << ((byte)uStack_160._4_4_ & 0x1f) & 0x46U) == 0) {
      local_168 = (longlong *)*puVar6;
    }
    else {
      FUN_1400419b0(&local_168,puVar6);
    }
    FUN_140042560(&local_168,uVar3);
    FUN_1400460e0(&local_78,&local_168);
    if ((1 << ((byte)uStack_160._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_78);
    local_d0 = 0x1e;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56c20);
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
    puVar5 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_158,0,uVar4,0);
    if (puVar5 != &local_c8) {
      local_178 = (longlong *)*puVar5;
      uStack_170._0_4_ = *(uint *)(puVar5 + 1);
      uStack_170._4_4_ = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_178);
    }
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    FUN_140e87930(uVar9,DAT_141a0d3e8,0x80000000,&local_c8);
    local_d0 = 0x20;
    uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a56bc0);
    FUN_140e609c0(param_1);
    FUN_1400462a0(uVar4,uVar3);
    FUN_140e60910(1);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e0;
  return;
}

