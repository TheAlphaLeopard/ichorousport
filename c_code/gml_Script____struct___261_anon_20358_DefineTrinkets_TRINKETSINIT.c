// gml_Script____struct___261_anon_20358_DefineTrinkets_TRINKETSINIT @ 0x1405f9810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___261_anon_20358_DefineTrinkets_TRINKETSINIT
          (ulonglong param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong in_stack_fffffffffffffe70;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  ulonglong local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  uint local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
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
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  uint local_88 [3];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  uint *local_38;
  undefined1 *local_30;
  
  local_130 = "gml_Script_anon@19878@DefineTrinkets@TRINKETSINIT";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x31b;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_e8,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_15c = 0;
  local_168 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x31c;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  FUN_140e87440(puVar4,DAT_141a1f4e0,0x80000000,&local_148,uVar7,
                in_stack_fffffffffffffe70 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  local_188 = local_148;
  uStack_180 = uStack_140;
  uStack_17c = uStack_13c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_188);
  local_60 = local_d8;
  ppuVar9 = &local_60;
  uVar7 = CONCAT44(uVar8,DAT_141a02ef8);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_168,1,uVar7,ppuVar9);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 == '\0') {
    local_128 = 0x31c;
  }
  else {
    local_128 = 0x31d;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*param_5;
    }
    FUN_140e87440(puVar4,DAT_141a1f4e0,0x80000000,&local_148,uVar7 & 0xffffffffffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    uVar7 = param_1;
    FUN_140e87170(&local_148,DAT_141a1f580,0x80000000,&local_f8,param_1,param_2);
    uVar8 = (undefined4)(uVar7 >> 0x20);
    local_188 = local_f8;
    uStack_180 = uStack_f0;
    uStack_17c = uStack_ec;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_188);
    local_68 = local_e8;
    uStack_17c = 0xf;
    local_188 = 0x10000000000009d;
    local_178 = 0x9d;
    uStack_174 = 0x1000000;
    uStack_170 = uStack_180;
    uStack_16c = 0xf;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_178);
    local_60 = local_d8;
    uVar2 = FUN_140e634e0(param_1,param_2,&local_168,2,CONCAT44(uVar8,DAT_1419f60e8),&local_68);
    cVar1 = FUN_140e491e0(uVar2);
    if (cVar1 == '\0') {
      local_128 = 0x31d;
    }
    else {
      local_128 = 799;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      local_168 = 0;
      local_160 = 0;
      local_15c = 5;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      uStack_17c = 0xf;
      local_188 = 0x1000000000000ee;
      FUN_140e87170(&local_188,DAT_1419fe0e8,0x80000000,&local_108,param_1,param_2);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      uStack_17c = 0xf;
      local_188 = 0x1000000000000ee;
      uVar7 = param_1;
      uVar10 = param_2;
      FUN_140e87170(&local_188,DAT_1419fe158,0x80000000,&local_118,param_1,param_2);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if (0 < param_4) {
        puVar5 = (undefined8 *)*param_5;
      }
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(puVar5,DAT_141a1f4e0,0x80000000,&local_148,uVar7,uVar10 & 0xffffffffffffff00);
      uVar8 = (undefined4)(uVar7 >> 0x20);
      local_178 = DAT_141a575a0 & 0xffffff;
      uStack_174 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
      if (uStack_174 == 0xf) {
        uStack_174 = 0x4000004;
      }
      else {
        uStack_174 = uStack_174 | 0x1000000;
      }
      uStack_17c = 0xf;
      local_188 = CONCAT44(uStack_174,DAT_141a575a0) & 0xffffffff00ffffff;
      uStack_170 = uStack_180;
      uStack_16c = 0xf;
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_178);
      local_68 = local_e8;
      local_178 = (uint)local_108;
      uStack_174 = local_108._4_4_;
      uStack_170 = uStack_100;
      uStack_16c = uStack_fc;
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_178);
      local_60 = local_d8;
      local_178 = (uint)local_118;
      uStack_174 = local_118._4_4_;
      uStack_170 = uStack_110;
      uStack_16c = uStack_10c;
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_178);
      local_58 = local_c8;
      uStack_17c = 0xf;
      local_188 = 0x1000000000000ee;
      local_178 = 0xee;
      uStack_174 = 0x1000000;
      uStack_170 = uStack_180;
      uStack_16c = 0xf;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_178);
      local_178 = (uint)local_148;
      uStack_174 = local_148._4_4_;
      uStack_170 = uStack_140;
      uStack_16c = uStack_13c;
      local_50 = local_b8;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_178);
      local_48 = local_a8;
      local_178 = _DAT_1419e6a10;
      uStack_174 = uRam00000001419e6a14;
      uStack_170 = uRam00000001419e6a18;
      uStack_16c = uRam00000001419e6a1c;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_178);
      local_40 = local_98;
      puVar3 = (uint *)FUN_140e634e0(param_1,param_2,&local_158,6,CONCAT44(uVar8,DAT_1419fd6d8),
                                     &local_68);
      if (puVar3 != local_88) {
        local_178 = *puVar3;
        uStack_174 = puVar3[1];
        uStack_170 = puVar3[2];
        uStack_16c = puVar3[3];
        if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_88);
        }
        FUN_140041b80(local_88,&local_178);
      }
      local_38 = local_88;
      local_178 = (uint)DAT_1419df7b0;
      uStack_174 = DAT_1419df7b0._4_4_;
      uStack_170 = DAT_1419df7b8;
      uStack_16c = DAT_1419df7bc;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_178);
      local_30 = local_78;
      gml_Script_draw_line_sprite(param_1,param_2,&local_168,2,&local_38);
    }
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

