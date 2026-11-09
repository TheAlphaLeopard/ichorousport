// gml_Script_anon_244_gml_Object_sys_imgui_Create_0 @ 0x140e3ade0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_244_gml_Object_sys_imgui_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_f0 = "gml_Object_sys_imgui_Create_0";
  local_e8 = 0;
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e8 = 2;
  uVar7 = 0;
  gml_Script_imgui_render(param_1,param_2,&local_c0,0,0);
  local_e8 = 4;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04058);
  FUN_140e609c0(param_1);
  puVar3 = (undefined8 *)FUN_140e8da20(&local_c0,param_1,0);
  if (puVar3 != puVar2) {
    local_118 = *puVar3;
    uStack_110 = *(undefined4 *)(puVar3 + 1);
    uStack_10c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_118);
  }
  FUN_140e60910(1);
  local_e8 = 6;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a56d60);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_118,gml_Script_anon_648_gml_Object_sys_imgui_Create_0,param_1);
  if (&local_118 != puVar2) {
    local_108 = (undefined4)local_118;
    uStack_104 = local_118._4_4_;
    uStack_100 = uStack_110;
    uStack_fc = uStack_10c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_108);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e60910(1);
  local_e8 = 0xb;
  puVar4 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3938);
  if (puVar4 != &DAT_141ddc018) {
    local_108 = _DAT_141ddc018;
    uStack_104 = uRam0000000141ddc01c;
    uStack_100 = uRam0000000141ddc020;
    uStack_fc = DAT_141ddc024;
    if ((1 << ((byte)*(undefined4 *)(puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_108);
  }
  local_e8 = 0xc;
  puVar4 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3968);
  if (puVar4 != &DAT_141ddc018) {
    local_108 = _DAT_141ddc018;
    uStack_104 = uRam0000000141ddc01c;
    uStack_100 = uRam0000000141ddc020;
    uStack_fc = DAT_141ddc024;
    if ((1 << ((byte)*(undefined4 *)(puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_108);
  }
  local_e8 = 0xd;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3a18);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0x401c000000000000;
  local_e8 = 0x10;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3a28);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_118,gml_Script_anon_1080_gml_Object_sys_imgui_Create_0,param_1);
  if (&local_118 != puVar2) {
    local_108 = (undefined4)local_118;
    uStack_104 = local_118._4_4_;
    uStack_100 = uStack_110;
    uStack_fc = uStack_10c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_108);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e60910(1);
  local_e8 = 0x20;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f4e78);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_118,gml_Object_sys_imgui_Step_1,param_1);
  if (&local_118 != puVar2) {
    local_108 = (undefined4)local_118;
    uStack_104 = local_118._4_4_;
    uStack_100 = uStack_110;
    uStack_fc = uStack_10c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_108);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e60910(1);
  local_e8 = 0x30;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3368);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_118,gml_Object_sys_imgui_Step_0,param_1);
  if (&local_118 != puVar2) {
    local_108 = (undefined4)local_118;
    uStack_104 = local_118._4_4_;
    uStack_100 = uStack_110;
    uStack_fc = uStack_10c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_108);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140e60910(1);
  local_e8 = 0x41;
  uStack_10c = 0xd;
  local_118 = 0;
  cVar1 = FUN_140e491e0(&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (cVar1 != '\0') {
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    local_d0 = 0;
    local_c8 = 0;
    local_c4 = 5;
    uStack_10c = 0xf;
    local_118 = 0x10000000000007d;
    local_108 = 0x7d;
    uStack_104 = 0x1000000;
    uStack_100 = uStack_110;
    uStack_fc = 0xf;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_108);
    local_58 = local_a8;
    uVar6 = CONCAT44(uVar7,DAT_141a02ef8);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_d0,1,uVar6,&local_58);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') {
      local_e8 = 0x42;
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      local_e0 = 0;
      local_d8 = 0;
      local_d4 = 5;
      local_108 = _DAT_141dc7a40;
      uStack_104 = uRam0000000141dc7a44;
      uStack_100 = uRam0000000141dc7a48;
      uStack_fc = uRam0000000141dc7a4c;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_108);
      local_50 = local_98;
      local_108 = _DAT_141dc7a40;
      uStack_104 = uRam0000000141dc7a44;
      uStack_100 = uRam0000000141dc7a48;
      uStack_fc = uRam0000000141dc7a4c;
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_108);
      local_48 = local_88;
      local_108 = _DAT_141dc7a40;
      uStack_104 = uRam0000000141dc7a44;
      uStack_100 = uRam0000000141dc7a48;
      uStack_fc = uRam0000000141dc7a4c;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_108);
      local_40 = local_78;
      uStack_10c = 0xf;
      local_118 = 0x10000000000007d;
      local_108 = 0x7d;
      uStack_104 = 0x1000000;
      uStack_100 = uStack_110;
      uStack_fc = 0xf;
      if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_68);
      }
      FUN_140041b80(local_68,&local_108);
      local_38 = local_68;
      FUN_140e634e0(param_1,param_2,&local_e0,4,CONCAT44(uVar7,DAT_141a02e88),&local_50);
    }
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return;
}

