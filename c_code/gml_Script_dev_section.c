// gml_Script_dev_section @ 0x14026c3f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_dev_section
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong **pplVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  uint local_res20;
  code *pcVar15;
  undefined4 uVar16;
  ulonglong in_stack_fffffffffffffce0;
  longlong local_318;
  undefined4 uStack_310;
  uint uStack_30c;
  longlong *local_308;
  longlong *plStack_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  longlong *local_2e8;
  undefined4 local_2dc;
  double local_2d8;
  undefined4 local_2cc;
  longlong local_2c8;
  undefined8 uStack_2c0;
  longlong *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  char *local_2a0;
  undefined4 local_298;
  longlong **local_290;
  double *local_288;
  uint local_280;
  uint local_27c;
  uint local_278;
  uint local_274;
  uint local_270;
  longlong local_268;
  undefined4 local_260;
  uint local_25c;
  longlong local_258;
  undefined4 local_250;
  uint local_24c;
  longlong local_248;
  undefined4 local_240;
  uint local_23c;
  longlong local_238;
  undefined4 local_230;
  uint local_22c;
  longlong local_228;
  undefined4 local_220;
  uint local_21c;
  longlong local_218;
  undefined4 local_210;
  uint local_20c;
  longlong local_208;
  undefined4 local_200;
  uint local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  longlong local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  longlong local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  longlong local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  longlong local_1a8;
  undefined4 uStack_1a0;
  uint uStack_19c;
  longlong local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  longlong local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined8 local_178;
  undefined4 local_16c;
  longlong local_168;
  undefined4 local_15c;
  longlong local_158;
  undefined4 local_14c;
  longlong local_148;
  undefined4 local_13c;
  longlong *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  undefined4 local_11c;
  longlong *local_118;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined4 local_ec;
  longlong local_e8;
  undefined4 local_dc;
  longlong local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint local_a8 [2];
  undefined8 *local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  
  uVar10 = 0;
  local_res20 = 0;
  local_2a0 = "gml_Script_ImguiWindow";
  local_2a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2a8;
  local_298 = 0x28;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_140041df0(local_a8,param_4,2,param_5);
  pcVar15 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_2e8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = (longlong *)0x0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_274 = 0xffffff;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_278 = 0xffffff;
  local_20c = 0xffffff;
  local_218 = 0;
  local_27c = 0xffffff;
  local_21c = 0xffffff;
  local_228 = 0;
  uVar14 = 0xffffff;
  local_22c = 0xffffff;
  local_238 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  uVar13 = 0xffffff;
  local_23c = 0xffffff;
  local_248 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_280 = 0xffffff;
  local_24c = 0xffffff;
  local_258 = 0;
  local_270 = 0xffffff;
  local_25c = 0xffffff;
  local_268 = 0;
  local_2ec = 0;
  local_2f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddce8) &&
     (_Init_thread_header(&DAT_141dddce8), DAT_141dddce8 == -1)) {
    DAT_141dddcc8 = (longlong *)FUN_140e63aa0(DAT_141a56e90);
    _Init_thread_footer(&DAT_141dddce8);
  }
  local_298 = 0x28;
  plVar9 = (longlong *)&DAT_1419df7b0;
  uVar11 = (ulonglong)local_a8[0];
  if ((int)local_a8[0] < 2) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)local_a0[1];
  }
  iVar2 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_298 = 0x28;
    if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f8);
    }
    local_2f8 = 0;
    local_2f0 = 0;
    local_2ec = 5;
    if (1 < (int)local_a8[0]) {
      plVar9 = (longlong *)local_a0[1];
    }
    in_stack_fffffffffffffce0 = 0;
    pcVar15 = (code *)CONCAT44((int)((ulonglong)pcVar15 >> 0x20),DAT_1419fd6d8);
    plVar3 = (longlong *)FUN_140e634e0(local_res8,local_res10,&local_2f8,0,pcVar15,0);
    if (plVar3 != plVar9) {
      local_2c8 = *plVar3;
      uStack_2c0 = (longlong *)plVar3[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar9);
      }
      FUN_140041b80(plVar9,&local_2c8);
    }
  }
  if (DAT_141ddc0a7 == '\0') {
    FUN_140e64380(DAT_141dddcc8,"gml_Script_ImguiWindow");
    FUN_140e64380(local_res8,"gml_Script_ImguiWindow");
  }
  FUN_140e643a0(local_res8,DAT_141dddcc8);
  local_298 = 0x2d;
  if (DAT_141ddc0a7 == '\0') {
    DAT_141ddc0a7 = '\x01';
    plVar9 = (longlong *)(**(code **)(*DAT_141dddcc8 + 0x10))(DAT_141dddcc8,DAT_141a570b0);
    FUN_140e609c0(DAT_141dddcc8);
    FUN_140e645a0(&local_318,gml_Script_set_name_dynamic_anon_1278_ImguiWindow_DebugPanelFuncs,0);
    if (&local_318 != plVar9) {
      uStack_2c0 = (longlong *)CONCAT44(uStack_30c,uStack_310);
      local_2c8 = local_318;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar9);
      }
      FUN_140041b80(plVar9,&local_2c8);
    }
    if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    FUN_140e60910(1);
    plVar9 = (longlong *)(**(code **)(*DAT_141dddcc8 + 0x10))(DAT_141dddcc8,DAT_141a0aa28);
    FUN_140e609c0(DAT_141dddcc8);
    FUN_140e645a0(&local_318,gml_Script_set_open_anon_1371_ImguiWindow_DebugPanelFuncs,0);
    if (&local_318 != plVar9) {
      uStack_2c0 = (longlong *)CONCAT44(uStack_30c,uStack_310);
      local_2c8 = local_318;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar9);
      }
      FUN_140041b80(plVar9,&local_2c8);
    }
    if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    FUN_140e60910(1);
    plVar9 = (longlong *)(**(code **)(*DAT_141dddcc8 + 0x10))(DAT_141dddcc8,DAT_141a571c0);
    FUN_140e609c0(DAT_141dddcc8);
    FUN_140e645a0(&local_318,gml_Script_set_style_anon_1541_ImguiWindow_DebugPanelFuncs,0);
    if (&local_318 != plVar9) {
      uStack_2c0 = (longlong *)CONCAT44(uStack_30c,uStack_310);
      local_2c8 = local_318;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar9);
      }
      FUN_140041b80(plVar9,&local_2c8);
    }
    if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    FUN_140e60910(1);
    plVar9 = (longlong *)(**(code **)(*DAT_141dddcc8 + 0x10))(DAT_141dddcc8,DAT_141a57180);
    FUN_140e609c0(DAT_141dddcc8);
    FUN_140e645a0(&local_318,gml_Script_toggle_open_anon_1655_ImguiWindow_DebugPanelFuncs,0);
    if (&local_318 != plVar9) {
      uStack_2c0 = (longlong *)CONCAT44(uStack_30c,uStack_310);
      local_2c8 = local_318;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar9);
      }
      FUN_140041b80(plVar9,&local_2c8);
    }
    if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    FUN_140e60910(1);
    plVar9 = (longlong *)(**(code **)(*DAT_141dddcc8 + 0x10))(DAT_141dddcc8,DAT_141a57020);
    FUN_140e609c0(DAT_141dddcc8);
    FUN_140e645a0(&local_318,gml_Script_is_open_anon_1739_ImguiWindow_DebugPanelFuncs,0);
    if (&local_318 != plVar9) {
      uStack_2c0 = (longlong *)CONCAT44(uStack_30c,uStack_310);
      local_2c8 = local_318;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar9);
      }
      FUN_140041b80(plVar9,&local_2c8);
    }
    if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    FUN_140e60910(1);
    plVar9 = (longlong *)(**(code **)(*DAT_141dddcc8 + 0x10))(DAT_141dddcc8,DAT_141a57170);
    FUN_140e609c0(DAT_141dddcc8);
    FUN_140e645a0(&local_318,gml_Script_get_x_anon_1918_ImguiWindow_DebugPanelFuncs,0);
    if (&local_318 != plVar9) {
      uStack_2c0 = (longlong *)CONCAT44(uStack_30c,uStack_310);
      local_2c8 = local_318;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar9);
      }
      FUN_140041b80(plVar9,&local_2c8);
    }
    if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    FUN_140e60910(1);
    plVar9 = (longlong *)(**(code **)(*DAT_141dddcc8 + 0x10))(DAT_141dddcc8,DAT_141a56de0);
    FUN_140e609c0(DAT_141dddcc8);
    FUN_140e645a0(&local_318,gml_Script_get_y_anon_1970_ImguiWindow_DebugPanelFuncs,0);
    if (&local_318 != plVar9) {
      uStack_2c0 = (longlong *)CONCAT44(uStack_30c,uStack_310);
      local_2c8 = local_318;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar9);
      }
      FUN_140041b80(plVar9,&local_2c8);
    }
    if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    FUN_140e60910(1);
    plVar9 = (longlong *)(**(code **)(*DAT_141dddcc8 + 0x10))(DAT_141dddcc8,DAT_141a57280);
    FUN_140e609c0(DAT_141dddcc8);
    FUN_140e645a0(&local_318,gml_Script_get_width_anon_2028_ImguiWindow_DebugPanelFuncs,0);
    if (&local_318 != plVar9) {
      uStack_2c0 = (longlong *)CONCAT44(uStack_30c,uStack_310);
      local_2c8 = local_318;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar9);
      }
      FUN_140041b80(plVar9,&local_2c8);
    }
    if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    FUN_140e60910(1);
    plVar9 = (longlong *)(**(code **)(*DAT_141dddcc8 + 0x10))(DAT_141dddcc8,DAT_141a56eb0);
    FUN_140e609c0(DAT_141dddcc8);
    FUN_140e645a0(&local_318,gml_Script_get_height_anon_2087_ImguiWindow_DebugPanelFuncs,0);
    if (&local_318 != plVar9) {
      uStack_2c0 = (longlong *)CONCAT44(uStack_30c,uStack_310);
      local_2c8 = local_318;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar9);
      }
      FUN_140041b80(plVar9,&local_2c8);
    }
    if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    FUN_140e60910(1);
    plVar9 = (longlong *)(**(code **)(*DAT_141dddcc8 + 0x10))(DAT_141dddcc8,DAT_141a04df8);
    FUN_140e609c0(DAT_141dddcc8);
    FUN_140e645a0(&local_318,gml_Script_set_pos_anon_2147_ImguiWindow_DebugPanelFuncs,0);
    if (&local_318 != plVar9) {
      uStack_2c0 = (longlong *)CONCAT44(uStack_30c,uStack_310);
      local_2c8 = local_318;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar9);
      }
      FUN_140041b80(plVar9,&local_2c8);
    }
    if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    FUN_140e60910(1);
    plVar9 = (longlong *)(**(code **)(*DAT_141dddcc8 + 0x10))(DAT_141dddcc8,DAT_141a05018);
    FUN_140e609c0(DAT_141dddcc8);
    FUN_140e645a0(&local_318,gml_Script_set_size_anon_2274_ImguiWindow_DebugPanelFuncs,0);
    if (&local_318 != plVar9) {
      uStack_2c0 = (longlong *)CONCAT44(uStack_30c,uStack_310);
      local_2c8 = local_318;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar9);
      }
      FUN_140041b80(plVar9,&local_2c8);
    }
    if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    FUN_140e60910(1);
    plVar9 = (longlong *)(**(code **)(*DAT_141dddcc8 + 0x10))(DAT_141dddcc8,DAT_141a56dc0);
    FUN_140e609c0(DAT_141dddcc8);
    FUN_140e645a0(&local_318,gml_Script_set_constraints_anon_2409_ImguiWindow_DebugPanelFuncs,0);
    if (&local_318 != plVar9) {
      uStack_2c0 = (longlong *)CONCAT44(uStack_30c,uStack_310);
      local_2c8 = local_318;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar9);
      }
      FUN_140041b80(plVar9,&local_2c8);
    }
    if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    FUN_140e60910(1);
    plVar9 = (longlong *)(**(code **)(*DAT_141dddcc8 + 0x10))(DAT_141dddcc8,DAT_141a57130);
    FUN_140e609c0(DAT_141dddcc8);
    FUN_140e645a0(&local_318,gml_Script___update_xywh_anon_3339_ImguiWindow_DebugPanelFuncs,0);
    if (&local_318 != plVar9) {
      uStack_2c0 = (longlong *)CONCAT44(uStack_30c,uStack_310);
      local_2c8 = local_318;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar9);
      }
      FUN_140041b80(plVar9,&local_2c8);
    }
    if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    FUN_140e60910(1);
    plVar9 = (longlong *)(**(code **)(*DAT_141dddcc8 + 0x10))(DAT_141dddcc8,DAT_141a57220);
    FUN_140e609c0(DAT_141dddcc8);
    FUN_140e645a0(&local_318,gml_Script_anon_3223_ImguiWindow_DebugPanelFuncs,0);
    if (&local_318 != plVar9) {
      uStack_2c0 = (longlong *)CONCAT44(uStack_30c,uStack_310);
      local_2c8 = local_318;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar9);
      }
      FUN_140041b80(plVar9,&local_2c8);
    }
    if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    FUN_140e60910(1);
    plVar9 = (longlong *)(**(code **)(*DAT_141dddcc8 + 0x10))(DAT_141dddcc8,DAT_141a56e30);
    FUN_140e609c0(DAT_141dddcc8);
    FUN_140e645a0(&local_318,gml_Script_anon_3257_ImguiWindow_DebugPanelFuncs,0);
    if (&local_318 != plVar9) {
      uStack_2c0 = (longlong *)CONCAT44(uStack_30c,uStack_310);
      local_2c8 = local_318;
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar9);
      }
      FUN_140041b80(plVar9,&local_2c8);
    }
    if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_318);
    }
    FUN_140e60910(1);
  }
  plVar9 = local_res8;
  local_298 = 0x29;
  local_10c = 6;
  local_118 = local_res8;
  uVar4 = FUN_140e5c910();
  FUN_140e42c10(uVar4,plVar9);
  local_298 = 0x2b;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  uStack_30c = 0xf;
  local_318 = 0x100000000000152;
  FUN_140e87440(&local_318,DAT_141a56d60,0x80000000,&local_178,
                (ulonglong)pcVar15 & 0xffffffffffffff00,
                in_stack_fffffffffffffce0 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  plVar9 = local_res8;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2dc = 6;
  local_2e8 = plVar9;
  uVar4 = FUN_140e5c910();
  FUN_140e42c10(uVar4,plVar9);
  local_290 = &local_2e8;
  uStack_30c = 0xf;
  local_318 = 0x100000000000152;
  uVar4 = FUN_140069500(&local_318);
  puVar6 = &local_178;
  FUN_140e63610(uVar4,local_res10,&local_2f8,1,puVar6,&local_290);
  uVar16 = (undefined4)((ulonglong)puVar6 >> 0x20);
  if ((1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_318);
  }
  local_298 = 0x78;
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_2f8 = 0;
  local_2f0 = 0;
  local_2ec = 5;
  plVar9 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57250);
  FUN_140e609c0(local_res8);
  uVar4 = CONCAT44(uVar16,DAT_1419fd6d8);
  plVar3 = (longlong *)FUN_140e634e0(local_res8,local_res10,&local_2f8,0,uVar4,0);
  if (plVar3 != plVar9) {
    local_2c8 = *plVar3;
    uStack_2c0 = (longlong *)plVar3[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar9);
    }
    FUN_140041b80(plVar9,&local_2c8);
  }
  FUN_140e60910(1);
  local_298 = 0x79;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
  iVar2 = FUN_140e63cb0(local_98,&local_res8,&local_res10,uVar5);
  uVar12 = 0xffffff;
  if (0 < iVar2) {
    do {
      uVar16 = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_298 = 0x7a;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a05b88);
      FUN_140e609c0(local_res8);
      if ((int)local_a8[0] < 1) {
        puVar8 = &DAT_1419df7b0;
      }
      else {
        puVar8 = (undefined8 *)*local_a0;
      }
      if (puVar8 != puVar6) {
        local_308 = (longlong *)*puVar8;
        plStack_300 = (longlong *)puVar8[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_308);
      }
      FUN_140e60910(1);
      local_298 = 0x7b;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57080);
      FUN_140e609c0(local_res8);
      if ((longlong **)puVar6 != &DAT_1419df7b0) {
        local_308 = DAT_1419df7b0;
        plStack_300 = _DAT_1419df7b8;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_308);
      }
      FUN_140e60910(1);
      local_298 = 0x7d;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      plVar9 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56f20);
      if ((int)local_a8[0] < 2) {
        pplVar7 = &DAT_1419df7b0;
LAB_14026d387:
        local_308 = *pplVar7;
        plStack_300 = pplVar7[1];
        if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        FUN_140041b80(&local_2e8,&local_308);
      }
      else {
        pplVar7 = (longlong **)local_a0[1];
        if (pplVar7 != &local_2e8) goto LAB_14026d387;
      }
      iVar2 = DAT_141a56f20;
      local_290 = &local_2e8;
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2cc = 0;
      local_2d8 = (double)iVar2;
      local_288 = &local_2d8;
      uVar4 = CONCAT44(uVar16,DAT_141a035d8);
      plVar3 = (longlong *)FUN_140e634e0(local_res8,local_res10,&local_2f8,2,uVar4,&local_290);
      uVar16 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if (plVar3 != &local_208) {
        local_308 = (longlong *)*plVar3;
        plStack_300 = (longlong *)plVar3[1];
        if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        FUN_140041b80(&local_208,&local_308);
        local_274 = local_1fc;
      }
      if ((local_274 & 0xffffff) == 3) {
        if (local_208 != 0) goto LAB_14026d489;
LAB_14026d4b8:
        local_11c = 10;
        local_128 = 0;
        plVar3 = &local_128;
        uVar10 = uVar10 | 1;
      }
      else {
        if ((local_274 & 0xffffff) == 5) goto LAB_14026d4b8;
LAB_14026d489:
        uStack_1d0 = local_200;
        uStack_1cc = local_274;
        if ((1 << ((byte)local_274 & 0x1f) & 0x46U) == 0) {
          local_1d8 = local_208;
        }
        else {
          FUN_1400419b0(&local_1d8,&local_208);
        }
        plVar3 = &local_1d8;
        uVar10 = uVar10 | 2;
      }
      local_res20 = uVar10;
      FUN_140e609c0(local_res8);
      if (plVar3 != plVar9) {
        local_308 = (longlong *)*plVar3;
        plStack_300 = (longlong *)plVar3[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar9);
        }
        FUN_140041b80(plVar9,&local_308);
      }
      if (((uVar10 & 2) != 0) &&
         (uVar10 = uVar10 & 0xfffffffd, local_res20 = uVar10,
         (1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_1d8);
      }
      if (((uVar10 & 1) != 0) &&
         (uVar10 = uVar10 & 0xfffffffe, local_res20 = uVar10,
         (1 << ((byte)local_11c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_128);
      }
      FUN_140e60910(1);
      local_298 = 0x7f;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      plVar9 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57260);
      if ((int)local_a8[0] < 2) {
        pplVar7 = &DAT_1419df7b0;
LAB_14026d5f7:
        local_308 = *pplVar7;
        plStack_300 = pplVar7[1];
        if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        FUN_140041b80(&local_2e8,&local_308);
      }
      else {
        pplVar7 = (longlong **)local_a0[1];
        if (pplVar7 != &local_2e8) goto LAB_14026d5f7;
      }
      iVar2 = DAT_141a57260;
      local_290 = &local_2e8;
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2cc = 0;
      local_2d8 = (double)iVar2;
      local_288 = &local_2d8;
      uVar4 = CONCAT44(uVar16,DAT_141a035d8);
      plVar3 = (longlong *)FUN_140e634e0(local_res8,local_res10,&local_2f8,2,uVar4,&local_290);
      uVar16 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if (plVar3 != &local_218) {
        local_308 = (longlong *)*plVar3;
        plStack_300 = (longlong *)plVar3[1];
        if ((1 << ((byte)local_278 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        FUN_140041b80(&local_218,&local_308);
        local_278 = local_20c;
      }
      if ((local_278 & 0xffffff) == 3) {
        if (local_218 != 0) goto LAB_14026d6f9;
LAB_14026d731:
        local_ec = 0xd;
        local_f8 = 0x3ff0000000000000;
        plVar3 = &local_f8;
        uVar10 = uVar10 | 4;
      }
      else {
        if ((local_278 & 0xffffff) == 5) goto LAB_14026d731;
LAB_14026d6f9:
        uStack_1c0 = local_210;
        uStack_1bc = local_278;
        if ((1 << ((byte)local_278 & 0x1f) & 0x46U) == 0) {
          local_1c8 = local_218;
        }
        else {
          FUN_1400419b0(&local_1c8,&local_218);
        }
        plVar3 = &local_1c8;
        uVar10 = uVar10 | 8;
      }
      local_res20 = uVar10;
      FUN_140e609c0(local_res8);
      if (plVar3 != plVar9) {
        local_308 = (longlong *)*plVar3;
        plStack_300 = (longlong *)plVar3[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar9);
        }
        FUN_140041b80(plVar9,&local_308);
      }
      if (((uVar10 & 8) != 0) &&
         (uVar10 = uVar10 & 0xfffffff7, local_res20 = uVar10,
         (1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_1c8);
      }
      if (((uVar10 & 4) != 0) &&
         (uVar10 = uVar10 & 0xfffffffb, local_res20 = uVar10,
         (1 << ((byte)local_ec & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_f8);
      }
      FUN_140e60910(1);
      local_298 = 0x80;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      plVar9 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a571e0);
      if ((int)local_a8[0] < 2) {
        pplVar7 = &DAT_1419df7b0;
LAB_14026d879:
        local_308 = *pplVar7;
        plStack_300 = pplVar7[1];
        if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        FUN_140041b80(&local_2e8,&local_308);
      }
      else {
        pplVar7 = (longlong **)local_a0[1];
        if (pplVar7 != &local_2e8) goto LAB_14026d879;
      }
      iVar2 = DAT_141a571e0;
      local_290 = &local_2e8;
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2cc = 0;
      local_2d8 = (double)iVar2;
      local_288 = &local_2d8;
      uVar4 = CONCAT44(uVar16,DAT_141a035d8);
      plVar3 = (longlong *)FUN_140e634e0(local_res8,local_res10,&local_2f8,2,uVar4,&local_290);
      uVar16 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if (plVar3 != &local_228) {
        local_308 = (longlong *)*plVar3;
        plStack_300 = (longlong *)plVar3[1];
        if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_308);
        local_27c = local_21c;
      }
      if ((local_27c & 0xffffff) == 3) {
        if (local_228 != 0) goto LAB_14026d97b;
LAB_14026d9b3:
        local_dc = 10;
        local_e8 = 0x40;
        plVar3 = &local_e8;
        uVar10 = uVar10 | 0x10;
      }
      else {
        if ((local_27c & 0xffffff) == 5) goto LAB_14026d9b3;
LAB_14026d97b:
        uStack_1b0 = local_220;
        uStack_1ac = local_27c;
        if ((1 << ((byte)local_27c & 0x1f) & 0x46U) == 0) {
          local_1b8 = local_228;
        }
        else {
          FUN_1400419b0(&local_1b8,&local_228);
        }
        plVar3 = &local_1b8;
        uVar10 = uVar10 | 0x20;
      }
      local_res20 = uVar10;
      FUN_140e609c0(local_res8);
      if (plVar3 != plVar9) {
        local_308 = (longlong *)*plVar3;
        plStack_300 = (longlong *)plVar3[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar9);
        }
        FUN_140041b80(plVar9,&local_308);
      }
      if (((uVar10 & 0x20) != 0) &&
         (uVar10 = uVar10 & 0xffffffdf, local_res20 = uVar10,
         (1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_1b8);
      }
      if (((uVar10 & 0x10) != 0) &&
         (uVar10 = uVar10 & 0xffffffef, local_res20 = uVar10,
         (1 << ((byte)local_dc & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_e8);
      }
      FUN_140e60910(1);
      local_298 = 0x82;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56d20);
      FUN_140e609c0(local_res8);
      if ((longlong **)puVar6 != &DAT_1419df7b0) {
        local_308 = DAT_1419df7b0;
        plStack_300 = _DAT_1419df7b8;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_308);
      }
      FUN_140e60910(1);
      local_298 = 0x84;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      if ((int)local_a8[0] < 2) {
        pplVar7 = &DAT_1419df7b0;
LAB_14026db5a:
        local_308 = *pplVar7;
        plStack_300 = pplVar7[1];
        if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        FUN_140041b80(&local_2e8,&local_308);
      }
      else {
        pplVar7 = (longlong **)local_a0[1];
        if (pplVar7 != &local_2e8) goto LAB_14026db5a;
      }
      iVar2 = DAT_1419fe0e8;
      local_290 = &local_2e8;
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2cc = 0;
      local_2d8 = (double)iVar2;
      local_288 = &local_2d8;
      uVar4 = CONCAT44(uVar16,DAT_141a035d8);
      plVar9 = (longlong *)FUN_140e634e0(local_res8,local_res10,&local_2f8,2,uVar4,&local_290);
      uVar16 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if (plVar9 != &local_238) {
        local_308 = (longlong *)*plVar9;
        plStack_300 = (longlong *)plVar9[1];
        if ((1 << ((byte)uVar14 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        FUN_140041b80(&local_238,&local_308);
        uVar14 = local_22c;
      }
      if ((uVar14 & 0xffffff) == 3) {
        if (local_238 != 0) goto LAB_14026dc58;
LAB_14026dc94:
        local_cc = 0;
        local_d8 = 0;
        plVar9 = &local_d8;
        uVar10 = uVar10 | 0x40;
      }
      else {
        if ((uVar14 & 0xffffff) == 5) goto LAB_14026dc94;
LAB_14026dc58:
        uStack_19c = uVar14;
        uStack_1a0 = local_230;
        if ((1 << ((byte)uVar14 & 0x1f) & 0x46U) == 0) {
          local_1a8 = local_238;
        }
        else {
          FUN_1400419b0(&local_1a8,&local_238);
        }
        plVar9 = &local_1a8;
        uVar10 = uVar10 | 0x80;
      }
      local_308 = (longlong *)*plVar9;
      plStack_300 = (longlong *)plVar9[1];
      local_res20 = uVar10;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_308);
      if (((char)uVar10 < '\0') &&
         (uVar10 = uVar10 & 0xffffff7f, local_res20 = uVar10,
         (1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_1a8);
      }
      if (((uVar10 & 0x40) != 0) &&
         (uVar10 = uVar10 & 0xffffffbf, local_res20 = uVar10,
         (1 << ((byte)local_cc & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_d8);
      }
      FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_1e8);
      local_298 = 0x85;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      if ((int)local_a8[0] < 2) {
        pplVar7 = &DAT_1419df7b0;
LAB_14026ddc5:
        local_308 = *pplVar7;
        plStack_300 = pplVar7[1];
        if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        FUN_140041b80(&local_2e8,&local_308);
      }
      else {
        pplVar7 = (longlong **)local_a0[1];
        if (pplVar7 != &local_2e8) goto LAB_14026ddc5;
      }
      iVar2 = DAT_1419fe158;
      local_290 = &local_2e8;
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2cc = 0;
      local_2d8 = (double)iVar2;
      local_288 = &local_2d8;
      uVar4 = CONCAT44(uVar16,DAT_141a035d8);
      plVar9 = (longlong *)FUN_140e634e0(local_res8,local_res10,&local_2f8,2,uVar4,&local_290);
      uVar16 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if (plVar9 != &local_248) {
        local_308 = (longlong *)*plVar9;
        plStack_300 = (longlong *)plVar9[1];
        if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        FUN_140041b80(&local_248,&local_308);
        uVar13 = local_23c;
      }
      if ((uVar13 & 0xffffff) == 3) {
        if (local_248 != 0) goto LAB_14026dec3;
LAB_14026deff:
        local_15c = 0;
        local_168 = 0;
        plVar9 = &local_168;
        uVar10 = uVar10 | 0x100;
      }
      else {
        if ((uVar13 & 0xffffff) == 5) goto LAB_14026deff;
LAB_14026dec3:
        uStack_18c = uVar13;
        uStack_190 = local_240;
        if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) == 0) {
          local_198 = local_248;
        }
        else {
          FUN_1400419b0(&local_198,&local_248);
        }
        plVar9 = &local_198;
        uVar10 = uVar10 | 0x200;
      }
      local_308 = (longlong *)*plVar9;
      plStack_300 = (longlong *)plVar9[1];
      local_res20 = uVar10;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_308);
      if (((uVar10 >> 9 & 1) != 0) &&
         (uVar10 = uVar10 & 0xfffffdff, local_res20 = uVar10,
         (1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_198);
      }
      if (((uVar10 >> 8 & 1) != 0) &&
         (uVar10 = uVar10 & 0xfffffeff, local_res20 = uVar10,
         (1 << ((byte)local_15c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_168);
      }
      FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_1f8);
      local_298 = 0x86;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      plVar9 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a00fd8);
      if ((int)local_a8[0] < 2) {
        pplVar7 = &DAT_1419df7b0;
LAB_14026e049:
        local_308 = *pplVar7;
        plStack_300 = pplVar7[1];
        if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        FUN_140041b80(&local_2e8,&local_308);
      }
      else {
        pplVar7 = (longlong **)local_a0[1];
        if (pplVar7 != &local_2e8) goto LAB_14026e049;
      }
      iVar2 = DAT_141a00fd8;
      local_290 = &local_2e8;
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2cc = 0;
      local_2d8 = (double)iVar2;
      local_288 = &local_2d8;
      uVar4 = CONCAT44(uVar16,DAT_141a035d8);
      plVar3 = (longlong *)FUN_140e634e0(local_res8,local_res10,&local_2f8,2,uVar4,&local_290);
      uVar16 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if (plVar3 != &local_258) {
        local_308 = (longlong *)*plVar3;
        plStack_300 = (longlong *)plVar3[1];
        if ((1 << ((byte)local_280 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        FUN_140041b80(&local_258,&local_308);
        local_280 = local_24c;
      }
      if ((local_280 & 0xffffff) == 3) {
        if (local_258 != 0) goto LAB_14026e14b;
LAB_14026e183:
        local_14c = 0;
        local_158 = 0x4049000000000000;
        plVar3 = &local_158;
        uVar10 = uVar10 | 0x400;
      }
      else {
        if ((local_280 & 0xffffff) == 5) goto LAB_14026e183;
LAB_14026e14b:
        uStack_180 = local_250;
        uStack_17c = local_280;
        if ((1 << ((byte)local_280 & 0x1f) & 0x46U) == 0) {
          local_188 = local_258;
        }
        else {
          FUN_1400419b0(&local_188,&local_258);
        }
        plVar3 = &local_188;
        uVar10 = uVar10 | 0x800;
      }
      local_res20 = uVar10;
      FUN_140e609c0(local_res8);
      if (plVar3 != plVar9) {
        local_308 = (longlong *)*plVar3;
        plStack_300 = (longlong *)plVar3[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar9);
        }
        FUN_140041b80(plVar9,&local_308);
      }
      if (((uVar10 >> 0xb & 1) != 0) &&
         (uVar10 = uVar10 & 0xfffff7ff, local_res20 = uVar10,
         (1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_188);
      }
      if (((uVar10 >> 10 & 1) != 0) &&
         (uVar10 = uVar10 & 0xfffffbff, local_res20 = uVar10,
         (1 << ((byte)local_14c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_158);
      }
      FUN_140e60910(1);
      local_298 = 0x87;
      if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2f8);
      }
      local_2f8 = 0;
      local_2f0 = 0;
      local_2ec = 5;
      plVar9 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a01058);
      if ((int)local_a8[0] < 2) {
        pplVar7 = &DAT_1419df7b0;
LAB_14026e2cf:
        local_308 = *pplVar7;
        plStack_300 = pplVar7[1];
        if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2e8);
        }
        FUN_140041b80(&local_2e8,&local_308);
      }
      else {
        pplVar7 = (longlong **)local_a0[1];
        if (pplVar7 != &local_2e8) goto LAB_14026e2cf;
      }
      iVar2 = DAT_141a01058;
      local_290 = &local_2e8;
      if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_2cc = 0;
      local_2d8 = (double)iVar2;
      local_288 = &local_2d8;
      uVar4 = CONCAT44(uVar16,DAT_141a035d8);
      plVar3 = (longlong *)FUN_140e634e0(local_res8,local_res10,&local_2f8,2,uVar4,&local_290);
      if (plVar3 != &local_268) {
        local_308 = (longlong *)*plVar3;
        plStack_300 = (longlong *)plVar3[1];
        if ((1 << ((byte)local_270 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        FUN_140041b80(&local_268,&local_308);
        local_270 = local_25c;
      }
      if ((local_270 & 0xffffff) == 3) {
        if (local_268 != 0) goto LAB_14026e3d1;
LAB_14026e403:
        local_13c = 0;
        local_148 = 0x4049000000000000;
        plVar3 = &local_148;
        uVar10 = uVar10 | 0x1000;
      }
      else {
        if ((local_270 & 0xffffff) == 5) goto LAB_14026e403;
LAB_14026e3d1:
        uStack_310 = local_260;
        uStack_30c = local_270;
        if ((1 << ((byte)local_270 & 0x1f) & 0x46U) == 0) {
          local_318 = local_268;
        }
        else {
          FUN_1400419b0(&local_318,&local_268);
        }
        plVar3 = &local_318;
        uVar10 = uVar10 | 0x2000;
      }
      local_res20 = uVar10;
      FUN_140e609c0(local_res8);
      if (plVar3 != plVar9) {
        local_308 = (longlong *)*plVar3;
        plStack_300 = (longlong *)plVar3[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar9);
        }
        FUN_140041b80(plVar9,&local_308);
      }
      if ((uVar10 >> 0xd != 0) &&
         (uVar10 = uVar10 & 0xffffdfff, local_res20 = uVar10,
         (1 << ((byte)uStack_30c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_318);
      }
      if (((uVar10 >> 0xc & 1) != 0) &&
         (uVar10 = uVar10 & 0xffffefff, local_res20 = uVar10,
         (1 << ((byte)local_13c & 0x1f) & 0x46U) != 0)) {
        FUN_140041a50(&local_148);
      }
      FUN_140e60910(1);
      local_298 = 0x89;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56df0);
      FUN_140e609c0(local_res8);
      if ((longlong **)puVar6 != &DAT_1419df7b0) {
        local_308 = DAT_1419df7b0;
        plStack_300 = _DAT_1419df7b8;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_308);
      }
      FUN_140e60910(1);
      local_298 = 0x8a;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57210);
      FUN_140e609c0(local_res8);
      if ((longlong **)puVar6 != &DAT_1419df7b0) {
        local_308 = DAT_1419df7b0;
        plStack_300 = _DAT_1419df7b8;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_308);
      }
      FUN_140e60910(1);
      local_298 = 0x8b;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57000);
      FUN_140e609c0(local_res8);
      if ((longlong **)puVar6 != &DAT_1419df7b0) {
        local_308 = DAT_1419df7b0;
        plStack_300 = _DAT_1419df7b8;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_308);
      }
      FUN_140e60910(1);
      local_298 = 0x8c;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56fe0);
      FUN_140e609c0(local_res8);
      if ((longlong **)puVar6 != &DAT_1419df7b0) {
        local_308 = DAT_1419df7b0;
        plStack_300 = _DAT_1419df7b8;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_308);
      }
      FUN_140e60910(1);
      local_298 = 0x8e;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56e50);
      uStack_bc = 0xd;
      local_c8 = 0x3ff0000000000000;
      if (&local_c8 != puVar6) {
        plStack_300 = (longlong *)CONCAT44(0xd,uStack_c0);
        local_308 = (longlong *)0x3ff0000000000000;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_308);
      }
      local_298 = 0x8f;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56f00);
      uStack_ac = 0xd;
      local_b8 = 0x3ff0000000000000;
      if (&local_b8 != puVar6) {
        plStack_300 = (longlong *)CONCAT44(0xd,uStack_b0);
        local_308 = (longlong *)0x3ff0000000000000;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_308);
      }
      local_298 = 0x90;
      plVar9 = (longlong *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57090);
      uStack_2c0 = (longlong *)CONCAT44(0xd,(undefined4)uStack_2c0);
      local_2c8 = 0;
      if (&local_2c8 != plVar9) {
        local_308 = (longlong *)0x0;
        plStack_300 = uStack_2c0;
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar9);
        }
        FUN_140041b80(plVar9,&local_308);
      }
      local_298 = 0x92;
      pplVar7 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56d70);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_138,&LAB_14026a6a0,local_res8);
      if (&local_138 != pplVar7) {
        plStack_300 = (longlong *)CONCAT44(uStack_12c,uStack_130);
        local_308 = local_138;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar7);
        }
        FUN_140041b80(pplVar7,&local_308);
      }
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140e60910(1);
      local_298 = 0x93;
      pplVar7 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57290);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_108,&LAB_14026a6d0,local_res8);
      if (&local_108 != pplVar7) {
        plStack_300 = (longlong *)CONCAT44(uStack_fc,uStack_100);
        local_308 = local_108;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar7);
        }
        FUN_140041b80(pplVar7,&local_308);
      }
      if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140e60910(1);
      local_298 = 0x94;
      pplVar7 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a570e0);
      FUN_140e609c0(local_res8);
      FUN_140e645a0(&local_2b8,&LAB_14026a700,local_res8);
      if (&local_2b8 != pplVar7) {
        plStack_300 = (longlong *)CONCAT44(uStack_2ac,uStack_2b0);
        local_308 = local_2b8;
        if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pplVar7);
        }
        FUN_140041b80(pplVar7,&local_308);
      }
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_98,&local_res8,&local_res10);
    } while (cVar1 != '\0');
    uVar12 = local_270;
  }
  FUN_140e63970(local_98,&local_res8,&local_res10);
  local_298 = 0x9f;
  pplVar7 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a570f0);
  FUN_140e609c0(local_res8);
  FUN_140e645a0(&local_2b8,gml_Script_anon_3292_ImguiWindow_DebugPanelFuncs,local_res8);
  if (&local_2b8 != pplVar7) {
    plStack_300 = (longlong *)CONCAT44(uStack_2ac,uStack_2b0);
    local_308 = local_2b8;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_308);
  }
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  FUN_140e60910(1);
  local_298 = 0xd8;
  pplVar7 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a56d40);
  FUN_140e609c0(local_res8);
  FUN_140e645a0(&local_2b8,gml_Script_anon_5093_ImguiWindow_DebugPanelFuncs,local_res8);
  if (&local_2b8 != pplVar7) {
    plStack_300 = (longlong *)CONCAT44(uStack_2ac,uStack_2b0);
    local_308 = local_2b8;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_308);
  }
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  FUN_140e60910(1);
  local_298 = 0xdd;
  pplVar7 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57240);
  FUN_140e609c0(local_res8);
  FUN_140e645a0(&local_2b8,gml_Script_ImguiWindow,local_res8);
  if (&local_2b8 != pplVar7) {
    plStack_300 = (longlong *)CONCAT44(uStack_2ac,uStack_2b0);
    local_308 = local_2b8;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_308);
  }
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  FUN_140e60910(1);
  local_298 = 0xe2;
  pplVar7 = (longlong **)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a572a0);
  FUN_140e609c0(local_res8);
  FUN_140e645a0(&local_2b8,gml_Script_imgui_reset_style,local_res8);
  if (&local_2b8 != pplVar7) {
    plStack_300 = (longlong *)CONCAT44(uStack_2ac,uStack_2b0);
    local_308 = local_2b8;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar7);
    }
    FUN_140041b80(pplVar7,&local_308);
  }
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  FUN_140e60910(1);
  if (local_88 != 0) {
    FUN_140e4cd60();
    local_88 = 0;
  }
  if ((1 << ((byte)local_2ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)uVar12 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_280 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uVar14 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_278 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041a50(&local_118);
  _eh_vector_destructor_iterator_(&local_2e8,0x10,2,FUN_140041b30);
  if (0 < (int)local_a8[0]) {
    puVar6 = local_a0;
    do {
      puVar8 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(undefined4 *)((longlong)puVar8 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  FUN_140e4cd60(local_a0);
  DAT_141dc7a50 = (undefined8 *)local_2a8;
  return local_res18;
}

