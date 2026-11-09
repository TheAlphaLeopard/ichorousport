// gml_Script_anon_3292_ImguiWindow_DebugPanelFuncs @ 0x14026a730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_3292_ImguiWindow_DebugPanelFuncs
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  undefined8 local_1d8;
  byte local_1cc;
  undefined8 local_1c8;
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
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
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_1f0 = "gml_Script_anon@3532@ImguiWindow@DebugPanelFuncs";
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  local_1e8 = 0x9f;
  _eh_vector_constructor_iterator_(&local_1d8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_3c = 0xffffff;
  local_48 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_21c = 0;
  local_228 = 0;
  local_1fc = 0;
  local_208 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1e8 = 0xa0;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56de0);
  uVar10 = 0;
  uVar4 = FUN_140e63610(param_1,param_2,&local_228,0,uVar3,0);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_1e8 = 0xa0;
  }
  else {
    local_1e8 = 0xa2;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar10 = uVar10 & 0xffffffffffffff00;
    ppuVar9 = (undefined8 **)(uVar3 & 0xffffffffffffff00);
    FUN_140e87440(uVar4,DAT_141a56e50,0x80000000,&local_48,ppuVar9,uVar10);
    cVar1 = FUN_140e491e0(&local_48);
    if (cVar1 != '\0') {
      local_1e8 = 0xa3;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = 0;
      local_220 = 0;
      local_21c = 5;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_188 = 0;
      local_180 = 0;
      local_17c = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57280);
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56eb0);
      puVar6 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_208,0,uVar4,0);
      if (puVar6 != &local_1d8) {
        local_178 = *puVar6;
        uStack_170 = puVar6[1];
        if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_178);
      }
      local_158 = &local_1d8;
      uVar10 = 0;
      puVar6 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_188,0,uVar5,0);
      if (puVar6 != &local_1c8) {
        local_178 = *puVar6;
        uStack_170 = puVar6[1];
        if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_178);
      }
      local_150 = &local_1c8;
      local_178 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_170 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
      if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_178);
      local_148 = local_1b8;
      local_178 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_170 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
      if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_178);
      local_140 = local_1a8;
      local_178 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_170 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_178);
      local_138 = local_198;
      ppuVar9 = &local_158;
      gml_Script_imgui_set_next_window_size_constraints(param_1,param_2,&local_228,5,&local_158);
      local_1e8 = 0xa4;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      uStack_170 = CONCAT44(0xd,(undefined4)uStack_170);
      local_178 = 0;
      local_218 = 0;
      uStack_210 = uStack_170;
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f0);
      }
      FUN_140041b80(&local_f0,&local_218);
      FUN_140e87930(uVar4,DAT_141a56e50,0x80000000,&local_f0);
    }
    local_1e8 = 0xa7;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar10 = uVar10 & 0xffffffffffffff00;
    ppuVar9 = (undefined8 **)((ulonglong)ppuVar9 & 0xffffffffffffff00);
    FUN_140e87440(uVar4,DAT_141a56f00,0x80000000,&local_58,ppuVar9,uVar10);
    cVar1 = FUN_140e491e0(&local_58);
    if (cVar1 != '\0') {
      local_1e8 = 0xa8;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = 0;
      local_220 = 0;
      local_21c = 5;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_208 = 0;
      local_200 = 0;
      local_1fc = 5;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_188 = 0;
      local_180 = 0;
      local_17c = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04df8);
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a05018);
      puVar6 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_208,0,uVar4,0);
      if (puVar6 != &local_1d8) {
        local_218 = *puVar6;
        uStack_210 = puVar6[1];
        if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_218);
      }
      local_158 = &local_1d8;
      uVar10 = 0;
      puVar6 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_188,0,uVar5,0);
      if (puVar6 != &local_1c8) {
        local_218 = *puVar6;
        uStack_210 = puVar6[1];
        if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_218);
      }
      local_150 = &local_1c8;
      local_218 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_210 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
      if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_218);
      local_148 = local_1b8;
      ppuVar9 = &local_158;
      gml_Script_imgui_set_next_window_content_size(param_1,param_2,&local_228,3,&local_158);
      local_1e8 = 0xa9;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      uStack_170 = CONCAT44(0xd,(undefined4)uStack_170);
      local_178 = 0;
      local_218 = 0;
      uStack_210 = uStack_170;
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      FUN_140041b80(&local_100,&local_218);
      FUN_140e87930(uVar4,DAT_141a56f00,0x80000000,&local_100);
    }
    local_1e8 = 0xab;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar10 = uVar10 & 0xffffffffffffff00;
    uVar3 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_141a57090,0x80000000,&local_68,uVar3,uVar10);
    cVar1 = FUN_140e491e0(&local_68);
    if (cVar1 != '\0') {
      local_1e8 = 0xac;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = 0;
      local_220 = 0;
      local_21c = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      uVar10 = uVar10 & 0xffffffffffffff00;
      uVar3 = uVar3 & 0xffffffffffffff00;
      FUN_140e87440(uVar4,DAT_141a56df0,0x80000000,&local_78,uVar3,uVar10);
      uVar10 = uVar10 & 0xffffffffffffff00;
      uVar3 = uVar3 & 0xffffffffffffff00;
      FUN_140e87440(uVar4,DAT_141a57000,0x80000000,&local_88,uVar3,uVar10);
      uVar10 = uVar10 & 0xffffffffffffff00;
      uVar3 = uVar3 & 0xffffffffffffff00;
      FUN_140e87440(uVar4,DAT_141a57210,0x80000000,&local_98,uVar3,uVar10);
      FUN_140e87440(uVar4,DAT_141a56fe0,0x80000000,&local_a8,uVar3 & 0xffffffffffffff00,
                    uVar10 & 0xffffffffffffff00);
      local_218 = local_78;
      uStack_210 = CONCAT44(uStack_6c,uStack_70);
      if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140041b80(&local_1d8,&local_218);
      local_158 = &local_1d8;
      local_218 = local_88;
      uStack_210 = CONCAT44(uStack_7c,uStack_80);
      if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_218);
      local_150 = &local_1c8;
      local_218 = local_98;
      uStack_210 = CONCAT44(uStack_8c,uStack_90);
      if ((1 << ((byte)_local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_218);
      local_148 = local_1b8;
      local_218 = local_a8;
      uStack_210 = CONCAT44(uStack_9c,uStack_a0);
      if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_218);
      local_140 = local_1a8;
      gml_Script_imgui_set_next_window_collapsed(param_1,param_2,&local_228,4,&local_158);
    }
    local_1e8 = 0xaf;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0aa28);
    uVar10 = 0;
    puVar6 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_228,0,uVar3,0);
    if (puVar6 != &local_168) {
      local_218 = *puVar6;
      uStack_210 = puVar6[1];
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_218);
    }
    local_1e8 = 0xb0;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar10 = uVar10 & 0xffffffffffffff00;
    puVar6 = (undefined8 *)(uVar3 & 0xffffffffffffff00);
    FUN_140e87440(uVar4,DAT_141a57080,0x80000000,&local_110,puVar6,uVar10);
    iVar2 = FUN_140e851f0(&local_110,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar2 != 0) {
      local_1e8 = 0xb1;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = 0;
      local_220 = 0;
      local_21c = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      FUN_140e87440(uVar4,DAT_141a57080,0x80000000,&local_110,(ulonglong)puVar6 & 0xffffffffffffff00
                    ,uVar10 & 0xffffffffffffff00);
      uVar4 = FUN_140069500(uVar4);
      uVar10 = 0;
      puVar6 = &local_110;
      puVar7 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_228,0,puVar6,0);
      if (puVar7 != &local_168) {
        local_218 = *puVar7;
        uStack_210 = puVar7[1];
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_218);
      }
    }
    local_1e8 = 0xb3;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar10 = uVar10 & 0xffffffffffffff00;
    puVar6 = (undefined8 *)((ulonglong)puVar6 & 0xffffffffffffff00);
    FUN_140e87440(uVar4,DAT_141a56d20,0x80000000,&local_120,puVar6,uVar10);
    iVar2 = FUN_140e851f0(&local_120,&DAT_1419df7b0,DAT_141955260,0);
    if (iVar2 != 0) {
      local_1e8 = 0xb4;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_228 = 0;
      local_220 = 0;
      local_21c = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
      FUN_140e87440(uVar4,DAT_141a56d20,0x80000000,&local_120,(ulonglong)puVar6 & 0xffffffffffffff00
                    ,uVar10 & 0xffffffffffffff00);
      uVar4 = FUN_140069500(uVar4);
      uVar10 = 0;
      puVar6 = &local_120;
      FUN_140e63610(uVar4,param_2,&local_228,0,puVar6,0);
    }
    local_1e8 = 0xb6;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar10 = uVar10 & 0xffffffffffffff00;
    uVar3 = (ulonglong)puVar6 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_141a56f20,0x80000000,&local_130,uVar3,uVar10);
    local_d4 = local_124;
    local_d8 = local_128;
    if ((1 << ((byte)local_124 & 0x1f) & 0x46U) == 0) {
      local_e0 = local_130;
    }
    else {
      FUN_1400419b0(&local_e0,&local_130);
    }
    if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddcd4) &&
       (_Init_thread_header(&DAT_141dddcd4), DAT_141dddcd4 == -1)) {
      _DAT_141dddcfc = 10;
      _DAT_141dddcf0 = 0;
      _DAT_141dddd10 = 10;
      _DAT_141dddd04 = 3;
      _DAT_141dddd14 = 1;
      atexit((_func_5014 *)&LAB_141470b60);
      _Init_thread_footer(&DAT_141dddcd4);
    }
    uVar8 = 0;
    do {
      iVar2 = FUN_140e851f0(&DAT_141dddcf0 + (longlong)(int)uVar8 * 0x14,&local_e0,DAT_141955260,0);
      if (iVar2 == 0) {
        if (*(int *)(&DAT_141dddd00 + (longlong)(int)uVar8 * 0x14) == 0) {
          local_1e8 = 0xb8;
          if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          local_228 = 0;
          local_220 = 0;
          local_21c = 5;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
          FUN_140e87440(uVar4,DAT_141a571e0,0x80000000,&local_b8,uVar3 & 0xffffffffffffff00,
                        uVar10 & 0xffffffffffffff00);
          local_158 = &local_168;
          local_218 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_210 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
          if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          FUN_140041b80(&local_1c8,&local_218);
          local_150 = &local_1c8;
          local_218 = local_b8;
          uStack_210 = CONCAT44(uStack_ac,uStack_b0);
          if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1b8);
          }
          FUN_140041b80(local_1b8,&local_218);
          local_148 = local_1b8;
          local_218 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_210 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
          if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1a8);
          }
          FUN_140041b80(local_1a8,&local_218);
          local_140 = local_1a8;
          uVar4 = gml_Script_imgui_begin_child(param_1,param_2,&local_228,4,&local_158);
          cVar1 = FUN_140e491e0(uVar4);
          if (cVar1 != '\0') {
            local_1e8 = 0xb9;
            if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_208);
            }
            local_208 = 0;
            local_200 = 0;
            local_1fc = 5;
            uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56e30);
            uVar10 = 0;
            FUN_140e63610(param_1,param_2,&local_208,0,uVar3,0);
            local_1e8 = 0xbb;
            if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            local_228 = 0;
            local_220 = 0;
            local_21c = 5;
            uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
            FUN_140e87440(uVar4,DAT_141a56d70,0x80000000,&local_d0,uVar3 & 0xffffffffffffff00,
                          uVar10 & 0xffffffffffffff00);
            uVar4 = FUN_140069500(uVar4);
            FUN_140e63610(uVar4,param_2,&local_228,0,&local_d0,0);
            local_1e8 = 0xbd;
            if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            local_228 = 0;
            local_220 = 0;
            local_21c = 5;
            gml_Script_imgui_end_child(param_1,param_2,&local_228,0,0);
          }
        }
        else if (*(int *)(&DAT_141dddd00 + (longlong)(int)uVar8 * 0x14) == 1) {
          local_1e8 = 0xc2;
          if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          local_228 = 0;
          local_220 = 0;
          local_21c = 5;
          local_158 = &local_168;
          local_218 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_210 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
          if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          FUN_140041b80(&local_1c8,&local_218);
          local_150 = &local_1c8;
          local_218 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_210 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
          if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1b8);
          }
          FUN_140041b80(local_1b8,&local_218);
          local_148 = local_1b8;
          local_218 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_210 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
          if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1a8);
          }
          FUN_140041b80(local_1a8,&local_218);
          local_140 = local_1a8;
          uVar4 = gml_Script_imgui_open_popup(param_1,param_2,&local_228,4,&local_158);
          cVar1 = FUN_140e491e0(uVar4);
          if (cVar1 != '\0') {
            local_1e8 = 0xc3;
            if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_208);
            }
            local_208 = 0;
            local_200 = 0;
            local_1fc = 5;
            uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56e30);
            FUN_140e63610(param_1,param_2,&local_208,0,uVar4,0);
            local_1e8 = 0xc4;
            if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            local_228 = 0;
            local_220 = 0;
            local_21c = 5;
            local_218 = CONCAT44(uRam0000000141dce30c,_DAT_141dce308);
            uStack_210 = CONCAT44(DAT_141dce314,uRam0000000141dce310);
            if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            FUN_140041b80(&local_1d8,&local_218);
            local_158 = &local_1d8;
            gml_Script_imgui_text_disabled(param_1,param_2,&local_228,1,&local_158);
            local_1e8 = 0xc5;
            if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            local_228 = 0;
            local_220 = 0;
            local_21c = 5;
            local_218 = CONCAT44(uRam0000000141dce42c,_DAT_141dce428);
            uStack_210 = CONCAT44(DAT_141dce434,uRam0000000141dce430);
            if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            FUN_140041b80(&local_1d8,&local_218);
            local_218 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_210 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
            if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            FUN_140041b80(&local_1c8,&local_218);
            local_218 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_210 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
            if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1b8);
            }
            FUN_140041b80(local_1b8,&local_218);
            uVar4 = gml_Script_imgui_invisible_button(param_1,param_2,&local_228,3,&local_158);
            cVar1 = FUN_140e491e0(uVar4);
            if (cVar1 != '\0') {
              local_1e8 = 200;
              if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_208);
              }
              local_208 = 0;
              local_200 = 0;
              local_1fc = 5;
              gml_Script_imgui_begin_popup_context_window(param_1,param_2,&local_208,0,0);
            }
            local_1e8 = 0xcb;
            if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            local_228 = 0;
            local_220 = 0;
            local_21c = 5;
            local_218 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_210 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
            if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            FUN_140041b80(&local_1d8,&local_218);
            local_218 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_210 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
            if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            FUN_140041b80(&local_1c8,&local_218);
            gml_Script_imgui_end_group(param_1,param_2,&local_228,2,&local_158);
            local_1e8 = 0xcc;
            if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            local_228 = 0;
            local_220 = 0;
            local_21c = 5;
            local_218 = CONCAT44(uRam0000000141dce23c,_DAT_141dce238);
            uStack_210 = CONCAT44(DAT_141dce244,uRam0000000141dce240);
            if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1d8);
            }
            FUN_140041b80(&local_1d8,&local_218);
            local_218 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_210 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
            if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            FUN_140041b80(&local_1c8,&local_218);
            local_218 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_210 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
            if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_1b8);
            }
            FUN_140041b80(local_1b8,&local_218);
            uVar4 = gml_Script_imgui_invisible_button(param_1,param_2,&local_228,3,&local_158);
            cVar1 = FUN_140e491e0(uVar4);
            if (cVar1 != '\0') {
              local_1e8 = 0xcf;
              if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_208);
              }
              local_208 = 0;
              local_200 = 0;
              local_1fc = 5;
              gml_Script_imgui_begin_popup_context_window(param_1,param_2,&local_208,0,0);
            }
            local_1e8 = 0xd1;
            if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_228);
            }
            local_228 = 0;
            local_220 = 0;
            local_21c = 5;
            gml_Script_imgui_open_popup_on_item_click(param_1,param_2,&local_228,0,0);
          }
        }
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 2);
    local_1e8 = 0xd5;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_220 = 0;
    local_21c = 5;
    local_228 = 0;
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(&local_1d8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1f8;
  return param_3;
}

