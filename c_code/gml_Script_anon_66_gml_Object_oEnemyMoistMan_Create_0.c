// gml_Script_anon_66_gml_Object_oEnemyMoistMan_Create_0 @ 0x1409da3c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_66_gml_Object_oEnemyMoistMan_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar11;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  undefined8 **ppuVar12;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_d0 = "gml_Object_oEnemyFreezeOverlay_Draw_0";
  local_c8 = 0;
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  uVar11 = 1;
  _eh_vector_constructor_iterator_(&local_128,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar7 = 0xffffff;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  uVar8 = 0xffffff;
  local_84 = 0xffffff;
  local_90 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_c8 = 2;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar4 != &local_128) {
    local_178 = (longlong *)*puVar4;
    uStack_170 = *(undefined4 *)(puVar4 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
  }
  local_c0 = &local_128;
  ppuVar12 = &local_c0;
  uVar9 = CONCAT44(uVar11,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar9,ppuVar12);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_c8 = 3;
  }
  else {
    local_c8 = 5;
    uStack_16c = 6;
    ppuVar12 = (undefined8 **)((ulonglong)ppuVar12 & 0xffffffffffffff00);
    uVar9 = uVar9 & 0xffffffffffffff00;
    local_178 = param_1;
    FUN_140e87440(&local_178,DAT_141a0a7e8,0,&local_58,uVar9,ppuVar12);
    uVar11 = (undefined4)(uVar9 >> 0x20);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    uStack_16c = 0;
    local_178 = (longlong *)&DAT_bff0000000000000;
    iVar2 = FUN_140e851f0(&local_58,&local_178,DAT_141955260,0);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    uVar3 = 1 << ((byte)local_15c & 0x1f);
    if (iVar2 == 0) {
      local_c8 = 0x11;
      if ((uVar3 & 0x46) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      uStack_16c = 0xf;
      local_178 = (longlong *)0x100000100000016;
      local_148 = (undefined8 *)0x100000100000016;
      uStack_140 = (char *)CONCAT44(0xf,uStack_170);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_148);
      local_c0 = &local_128;
      local_148 = (undefined8 *)CONCAT44(uRam00000001419eaa44,_DAT_1419eaa40);
      uStack_140 = (char *)CONCAT44(uRam00000001419eaa4c,uRam00000001419eaa48);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
      local_b8 = &local_118;
      local_148 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_140 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_148);
    }
    else {
      local_c8 = 7;
      if ((uVar3 & 0x46) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      uStack_16c = 0xf;
      local_178 = (longlong *)0x100000100000016;
      local_158 = 0x100000100000016;
      uStack_150 = uStack_170;
      uStack_14c = 0xf;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_158);
      local_c0 = &local_128;
      ppuVar12 = &local_c0;
      uVar9 = CONCAT44(uVar11,DAT_141a047c8);
      puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,1,uVar9,ppuVar12);
      if (puVar4 != &local_70) {
        local_178 = (longlong *)*puVar4;
        uStack_170 = *(undefined4 *)(puVar4 + 1);
        uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_70);
        }
        FUN_140041b80(&local_70,&local_178);
      }
      local_c8 = 9;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f1178);
      uStack_16c = 6;
      uVar9 = uVar9 & 0xffffffffffffff00;
      local_178 = param_1;
      FUN_140e87440(&local_178,DAT_141a0a7e8,0,&local_58,uVar9,
                    (ulonglong)ppuVar12 & 0xffffffffffffff00);
      uVar11 = (undefined4)(uVar9 >> 0x20);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = (longlong *)local_58;
      uStack_170 = uStack_50;
      uStack_16c = uStack_4c;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_178);
      local_c0 = &local_128;
      if (puVar4 != &local_118) {
        local_178 = (longlong *)*puVar4;
        uStack_170 = *(undefined4 *)(puVar4 + 1);
        uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_178);
      }
      local_b8 = &local_118;
      local_178 = (longlong *)CONCAT44(uRam0000000141dc6ee4,_DAT_141dc6ee0);
      uStack_170 = uRam0000000141dc6ee8;
      uStack_16c = uRam0000000141dc6eec;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_178);
      local_b0 = local_108;
      puVar6 = (undefined8 *)FUN_140e79230(&local_e8,2,&local_c0);
      if (puVar6 != &local_f8) {
        local_178 = (longlong *)*puVar6;
        uStack_170 = *(undefined4 *)(puVar6 + 1);
        uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_178);
      }
      local_a8 = &local_f8;
      puVar6 = (undefined8 *)FUN_140e79090(&local_168,2,&local_b0);
      uVar5 = 0;
      if (puVar6 != &local_80) {
        local_178 = (longlong *)*puVar6;
        uStack_170 = *(undefined4 *)(puVar6 + 1);
        uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
        FUN_140041b80(&local_80,&local_178);
        uVar5 = local_80;
        uVar7 = local_74;
      }
      local_c8 = 0xb;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      uStack_170 = local_78;
      uStack_16c = uVar7;
      if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) == 0) {
        local_178 = (longlong *)uVar5;
      }
      else {
        FUN_1400419b0(&local_178,&local_80);
      }
      FUN_140046500(&local_178,puVar4);
      local_94 = 0;
      local_a0 = 0x3ff0000000000000;
      FUN_1400462a0(&local_a0,&local_178);
      uStack_14c = local_94;
      uStack_150 = local_98;
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) == 0) {
        local_158 = local_a0;
      }
      else {
        FUN_1400419b0(&local_158,&local_a0);
      }
      FUN_140042560(&local_158,&local_70);
      local_148 = (undefined8 *)local_158;
      uStack_140 = (char *)CONCAT44(uStack_14c,uStack_150);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_148);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_c0 = &local_128;
      ppuVar12 = &local_c0;
      puVar4 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_168,1,CONCAT44(uVar11,DAT_1419fe728),ppuVar12);
      if (puVar4 != &local_90) {
        local_148 = (undefined8 *)*puVar4;
        uStack_140 = (char *)puVar4[1];
        FUN_140041b80(&local_90,&local_148);
        uVar8 = local_84;
      }
      local_c8 = 0xd;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      uStack_16c = 0xf;
      local_178 = (longlong *)0x100000100000016;
      local_148 = (undefined8 *)0x100000100000016;
      uStack_140 = (char *)CONCAT44(0xf,uStack_170);
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_148);
      local_c0 = &local_128;
      uStack_170 = local_88;
      uStack_16c = uVar8;
      if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) == 0) {
        local_178 = (longlong *)local_90;
      }
      else {
        FUN_1400419b0(&local_178,&local_90);
      }
      uStack_14c = 7;
      local_158 = CONCAT44(local_158._4_4_,1);
      FUN_1400460e0(&local_178,&local_158);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_148 = local_178;
      uStack_140 = (char *)CONCAT44(uStack_16c,uStack_170);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_148);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_b8 = &local_118;
      local_148 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
      uStack_140 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_148);
    }
    local_b0 = local_108;
    ppuVar10 = &local_c0;
    gml_Script_pal_swap_layer_init(param_1,param_2,&local_168,3,ppuVar10);
    local_c8 = 0x13;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
    FUN_140e87440(uVar5,DAT_1419f5b18,0x80000000,&local_48,(ulonglong)ppuVar10 & 0xffffffffffffff00,
                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
    uVar5 = FUN_140069500(uVar5);
    FUN_140e63610(uVar5,param_2,&local_168,0,&local_48,0);
    local_c8 = 0x15;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_160 = 0;
    uStack_140 = "gml_Script_pal_swap_reset";
    local_148 = DAT_141dc7a50;
    DAT_141dc7a50 = &local_148;
    local_15c = 5;
    local_168 = 0;
    local_138 = 0x71;
    iVar2 = FUN_140ec9d80();
    if (iVar2 != -1) {
      local_138 = 0x71;
      FUN_140ec9dc0();
    }
    DAT_141dc7a50 = local_148;
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)uVar8 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return;
}

