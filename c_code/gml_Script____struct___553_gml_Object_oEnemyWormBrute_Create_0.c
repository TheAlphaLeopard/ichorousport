// gml_Script____struct___553_gml_Object_oEnemyWormBrute_Create_0 @ 0x140aa1ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___553_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  code *pcVar7;
  undefined4 uVar11;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffe70;
  undefined1 **ppuVar12;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined4 local_2c;
  
  local_130 = "gml_Script_anon@11716@___struct___553@gml_Object_oEnemyWormBrute_Create_0";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x1fb;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_f8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_114 = 0xffffff;
  local_120 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_2c = 0xffffff;
  local_38 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_16c = 0;
  local_178 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x1fc;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar6 = (ulonglong)pcVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f21c8,0x80000000,&local_158,uVar6,
                in_stack_fffffffffffffe70 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar6 >> 0x20);
  local_188 = local_158;
  uStack_180 = uStack_150;
  uStack_17c = uStack_14c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_188);
  local_58 = local_f8;
  ppuVar12 = &local_58;
  uVar6 = CONCAT44(uVar11,DAT_1419fdc08);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar6,ppuVar12);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_128 = 0x20a;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar10 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_110,uVar6,uVar10);
    FUN_1400460e0(&local_110,uVar3);
    FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_110);
    local_128 = 0x20c;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    ppuVar12 = (undefined1 **)(uVar10 & 0xffffffffffffff00);
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_1419f2258,0x80000000,&local_38,uVar6,ppuVar12);
    cVar1 = FUN_140e491e0(&local_38);
    if (cVar1 == '\0') {
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      uVar6 = uVar6 & 0xffffffffffffff00;
      FUN_140e87440(uVar3,DAT_141a0a848,0x80000000,&local_120,uVar6,
                    (ulonglong)ppuVar12 & 0xffffffffffffff00);
      uVar11 = (undefined4)(uVar6 >> 0x20);
      local_188 = CONCAT44(uRam0000000141dc6fe4,_DAT_141dc6fe0);
      uStack_180 = uRam0000000141dc6fe8;
      uStack_17c = uRam0000000141dc6fec;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_188);
      local_58 = local_f8;
      ppuVar12 = &local_58;
      uVar6 = CONCAT44(uVar11,DAT_141a0a0d8);
      puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,1,uVar6,ppuVar12);
      uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
      uStack_160 = *(undefined4 *)(puVar5 + 1);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
        local_168 = *puVar5;
      }
      else {
        FUN_1400419b0(&local_168,puVar5);
      }
      uStack_17c = 0;
      local_188 = 0x3fd6666666666666;
      FUN_140042560(&local_168,&local_188);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      uVar2 = FUN_140e851f0(&local_120,&local_168,DAT_141955260,1);
      if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      if (uVar2 < 0x80000000) {
        local_128 = 0x20e;
        uVar10 = uVar6;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
          uVar10 = uVar6;
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f22a8);
        FUN_140e87440(uVar3,DAT_1419f21c8,0x80000000,&local_158,uVar10 & 0xffffffffffffff00,
                      (ulonglong)ppuVar12 & 0xffffffffffffff00);
        plVar8 = param_1;
        uVar10 = param_2;
        FUN_140e87170(&local_158,DAT_1419fe0e8,0x80000000,&local_98,param_1,param_2);
        FUN_140e87440(uVar3,DAT_1419f21c8,0x80000000,&local_158,
                      (ulonglong)plVar8 & 0xffffffffffffff00,uVar10 & 0xffffffffffffff00);
        plVar8 = param_1;
        uVar10 = param_2;
        FUN_140e87170(&local_158,DAT_1419fe158,0x80000000,&local_a8,param_1,param_2);
        uVar10 = uVar10 & 0xffffffffffffff00;
        uVar9 = (ulonglong)plVar8 & 0xffffffffffffff00;
        FUN_140e87440(uVar3,DAT_1419f21c8,0x80000000,&local_158,uVar9,uVar10);
        FUN_140e87440(&local_158,DAT_141a1eed0,0x80000000,&local_b8,uVar9 & 0xffffffffffffff00,
                      uVar10 & 0xffffffffffffff00);
        local_188 = local_98;
        uStack_180 = uStack_90;
        uStack_17c = uStack_8c;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_188);
        local_50 = local_e8;
        local_188 = local_a8;
        uStack_180 = uStack_a0;
        uStack_17c = uStack_9c;
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_188);
        local_48 = local_d8;
        local_188 = local_b8;
        uStack_180 = uStack_b0;
        uStack_17c = uStack_ac;
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_188);
        local_40 = local_c8;
        ppuVar12 = &local_50;
        FUN_140e63610(param_1,param_2,&local_148,3,uVar6,ppuVar12);
        local_128 = 0x20f;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
        local_188 = 0x3ff0000000000000;
        uStack_17c = 0xd;
        local_168 = 0x3ff0000000000000;
        uStack_160 = uStack_180;
        uStack_15c = 0xd;
        if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_78);
        }
        FUN_140041b80(&local_78,&local_168);
        FUN_140e87930(uVar3,DAT_1419f2258,0x80000000,&local_78);
      }
    }
    local_128 = 0x212;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_141a0a848,0x80000000,&local_120,uVar6,
                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar6 >> 0x20);
    local_188 = CONCAT44(uRam0000000141dc6fe4,_DAT_141dc6fe0);
    uStack_180 = uRam0000000141dc6fe8;
    uStack_17c = uRam0000000141dc6fec;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_188);
    local_58 = local_f8;
    ppuVar12 = &local_58;
    uVar6 = CONCAT44(uVar11,DAT_141a0a0d8);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,1,uVar6,ppuVar12);
    uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_160 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
      local_168 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_168,puVar5);
    }
    uStack_17c = 0;
    local_188 = 0x3fe6666666666666;
    FUN_140042560(&local_168,&local_188);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    uVar2 = FUN_140e851f0(&local_120,&local_168,DAT_141955260,1);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if (uVar2 < 0x80000000) {
      local_128 = 0x214;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2448);
      FUN_140e87440(uVar3,DAT_1419f21c8,0x80000000,&local_158,uVar6 & 0xffffffffffffff00,
                    (ulonglong)ppuVar12 & 0xffffffffffffff00);
      plVar8 = param_1;
      uVar6 = param_2;
      FUN_140e87170(&local_158,DAT_1419fe0e8,0x80000000,&local_98,param_1,param_2);
      FUN_140e609c0(param_1);
      if (&local_98 != puVar5) {
        local_188 = local_98;
        uStack_180 = uStack_90;
        uStack_17c = uStack_8c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_188);
      }
      FUN_140e60910(1);
      local_128 = 0x215;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2278);
      FUN_140e87440(uVar3,DAT_1419f21c8,0x80000000,&local_158,(ulonglong)plVar8 & 0xffffffffffffff00
                    ,uVar6 & 0xffffffffffffff00);
      plVar8 = param_1;
      uVar6 = param_2;
      FUN_140e87170(&local_158,DAT_1419fe158,0x80000000,&local_a8,param_1,param_2);
      FUN_140e609c0(param_1);
      if (&local_a8 != puVar5) {
        local_188 = local_a8;
        uStack_180 = uStack_a0;
        uStack_17c = uStack_9c;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_188);
      }
      FUN_140e60910(1);
      local_128 = 0x216;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f2318);
      uVar6 = uVar6 & 0xffffffffffffff00;
      uVar10 = (ulonglong)plVar8 & 0xffffffffffffff00;
      FUN_140e87440(uVar3,DAT_1419f21c8,0x80000000,&local_158,uVar10,uVar6);
      uVar6 = uVar6 & 0xffffffffffffff00;
      uVar10 = uVar10 & 0xffffffffffffff00;
      FUN_140e87440(&local_158,DAT_141a1eed0,0x80000000,&local_b8,uVar10,uVar6);
      FUN_140e609c0(param_1);
      if (&local_b8 != puVar5) {
        local_188 = local_b8;
        uStack_180 = uStack_b0;
        uStack_17c = uStack_ac;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_188);
      }
      FUN_140e60910(1);
      local_128 = 0x218;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_68,uVar10 & 0xffffffffffffff00,
                    uVar6 & 0xffffffffffffff00);
      local_188 = CONCAT44(uRam0000000141dd907c,_DAT_141dd9078);
      uStack_180 = uRam0000000141dd9080;
      uStack_17c = DAT_141dd9084;
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      FUN_140041b80(local_f8,&local_188);
      local_58 = local_f8;
      uVar3 = FUN_140069500(uVar3);
      FUN_140e63610(uVar3,param_2,&local_178,1,&local_68,&local_58);
    }
  }
  else {
    local_128 = 0x1fe;
    uVar4 = (**(code **)(*param_1 + 8))();
    uVar10 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_141a0a848,0x80000000,&local_110,uVar6,uVar10);
    FUN_1400460e0(&local_110,uVar3);
    FUN_140e87930(uVar4,DAT_141a0a848,0x80000000,&local_110);
    local_128 = 0x200;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar3,DAT_141a0a848,0x80000000,&local_120,uVar6,uVar10 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar6 >> 0x20);
    local_188 = CONCAT44(uRam0000000141dc6fe4,_DAT_141dc6fe0);
    uStack_180 = uRam0000000141dc6fe8;
    uStack_17c = uRam0000000141dc6fec;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_188);
    local_58 = local_f8;
    ppuVar12 = &local_58;
    uVar6 = CONCAT44(uVar11,DAT_141a0a0d8);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,1,uVar6,ppuVar12);
    uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_160 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
      local_168 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_168,puVar5);
    }
    uStack_17c = 7;
    local_188 = CONCAT44(local_188._4_4_,1);
    FUN_140042560(&local_168,&local_188);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    uVar2 = FUN_140e851f0(&local_120,&local_168,DAT_141955260,1);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    if (uVar2 < 0x80000000) {
      local_128 = 0x202;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_68,uVar6 & 0xffffffffffffff00,
                    (ulonglong)ppuVar12 & 0xffffffffffffff00);
      local_188 = CONCAT44(uRam0000000141dd907c,_DAT_141dd9078);
      uStack_180 = uRam0000000141dd9080;
      uStack_17c = DAT_141dd9084;
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_188);
      local_50 = local_e8;
      uVar3 = FUN_140069500(uVar3);
      FUN_140e63610(uVar3,param_2,&local_148,1,&local_68,&local_50);
      local_128 = 0x203;
    }
    else {
      local_128 = 0x206;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f24f8);
      puVar5 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_178,0,uVar4,0);
      if (puVar5 != &local_88) {
        local_188 = *puVar5;
        uStack_180 = *(undefined4 *)(puVar5 + 1);
        uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        FUN_140041b80(&local_88,&local_188);
      }
      FUN_140e87930(uVar3,DAT_1419f21c8,0x80000000,&local_88);
      local_128 = 0x207;
    }
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_2c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_38);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

