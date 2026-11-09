// gml_Object_oBgPest_Create_0 @ 0x1406879b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBgPest_Create_0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 **ppuVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_130 = "gml_Object_oBgFlash_Draw_0";
  local_128 = 0;
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  _eh_vector_constructor_iterator_(local_118,0x10,10,FUN_1400424d0,FUN_140041b30);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1c1f0);
  uStack_13c = 0xffffff;
  local_148 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_128 = 2;
  uStack_18c = 0;
  local_198 = 0;
  iVar1 = FUN_140e851f0(puVar2,&local_198,DAT_141955260,1);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if (0 < iVar1) {
    local_128 = 4;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    uStack_18c = 0xf;
    local_198 = 0x100000100000008;
    local_1c8 = (undefined8 *)0x100000100000008;
    uStack_1c0 = (char *)CONCAT44(0xf,uStack_190);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1c8);
    local_78 = local_118;
    if (puVar2 != &local_108) {
      local_1c8 = (undefined8 *)*puVar2;
      uStack_1c0 = (char *)puVar2[1];
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_1c8);
    }
    local_70 = &local_108;
    local_1c8 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_1c0 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1c8);
    ppuVar3 = &local_78;
    local_68 = local_f8;
    gml_Script_pal_swap_layer_init(param_1,param_2,&local_1a8,3,ppuVar3);
    uVar5 = (undefined4)((ulonglong)ppuVar3 >> 0x20);
    local_128 = 5;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    FUN_140e85f80(param_1,DAT_141a00d08,0,&local_148);
    local_1c8 = (undefined8 *)local_148;
    uStack_1c0 = (char *)CONCAT44(uStack_13c,uStack_140);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_1c8);
    local_78 = local_118;
    local_1c8 = (undefined8 *)local_148;
    uStack_1c0 = (char *)CONCAT44(uStack_13c,uStack_140);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1c8);
    local_70 = &local_108;
    local_1c8 = (undefined8 *)local_148;
    uStack_1c0 = (char *)CONCAT44(uStack_13c,uStack_140);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1c8);
    local_1c8 = (undefined8 *)local_148;
    uStack_1c0 = (char *)CONCAT44(uStack_13c,uStack_140);
    local_68 = local_f8;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_1c8);
    local_60 = local_e8;
    uStack_18c = 0xf;
    local_198 = 0x100000100000242;
    local_1c8 = (undefined8 *)0x100000100000242;
    uStack_1c0 = (char *)CONCAT44(0xf,uStack_190);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_1c8);
    local_58 = local_d8;
    local_1c8 = (undefined8 *)CONCAT44(uRam00000001419e73e4,_DAT_1419e73e0);
    uStack_1c0 = (char *)CONCAT44(uRam00000001419e73ec,uRam00000001419e73e8);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1c8);
    local_50 = local_c8;
    uVar4 = CONCAT44(uVar5,DAT_141a00e38);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,1,uVar4,&local_78);
    uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar2 != &local_b8) {
      local_1c8 = (undefined8 *)*puVar2;
      uStack_1c0 = (char *)puVar2[1];
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_1c8);
    }
    local_48 = &local_b8;
    uVar4 = CONCAT44(uVar5,DAT_141a00dd8);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_168,1,uVar4,&local_70);
    uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar2 != &local_a8) {
      local_1c8 = (undefined8 *)*puVar2;
      uStack_1c0 = (char *)puVar2[1];
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_1c8);
    }
    local_40 = &local_a8;
    uVar4 = CONCAT44(uVar5,DAT_141a00c98);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,1,uVar4,&local_68);
    uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar2 != &local_98) {
      local_1c8 = (undefined8 *)*puVar2;
      uStack_1c0 = (char *)puVar2[1];
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_1c8);
    }
    local_38 = &local_98;
    uVar4 = CONCAT44(uVar5,DAT_141a00d58);
    puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_188,1,uVar4,&local_60);
    uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (puVar2 != &local_88) {
      local_1c8 = (undefined8 *)*puVar2;
      uStack_1c0 = (char *)puVar2[1];
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_1c8);
    }
    local_30 = &local_88;
    FUN_140e634e0(param_1,param_2,&local_1a8,6,CONCAT44(uVar5,DAT_141a01f08),&local_58);
    local_128 = 6;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a0 = 0;
    uStack_1c0 = "gml_Script_pal_swap_reset";
    local_1c8 = DAT_141dc7a50;
    DAT_141dc7a50 = &local_1c8;
    local_19c = 5;
    local_1a8 = 0;
    local_1b8 = 0x71;
    iVar1 = FUN_140ec9d80();
    if (iVar1 != -1) {
      local_1b8 = 0x71;
      FUN_140ec9dc0();
    }
    DAT_141dc7a50 = local_1c8;
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_118,0x10,10,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return;
}

