// gml_Script_anon_4651____struct___627_gml_Object_oPlayer_Create_0 @ 0x140beeeb0

undefined8 *
gml_Script_anon_4651____struct___627_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *local_res8;
  undefined8 local_res10;
  undefined1 **ppuVar5;
  ulonglong uVar6;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 local_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_120 = "gml_Script_anon@4276@___struct___626@gml_Object_oPlayer_Create_0";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0xe7;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_a8,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_f4 = 0xffffff;
  local_100 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0xe9;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a096c8);
  uVar6 = 0;
  FUN_140e63610(local_res8,local_res10,&local_148,0,uVar3,0);
  local_118 = 0xeb;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5e38);
  iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,uVar3);
  if (0 < iVar2) {
    do {
      local_118 = 0xed;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      uStack_7c = 0xf;
      local_88 = 0x100000100000418;
      local_e8 = 0x418;
      uStack_e4 = 0x1000001;
      uStack_e0 = uStack_80;
      uStack_dc = 0xf;
      if ((1 << (local_a8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_e8);
      local_78 = local_a8;
      local_e8 = (undefined4)DAT_1419df7b0;
      uStack_e4 = DAT_1419df7b0._4_4_;
      uStack_e0 = DAT_1419df7b8;
      uStack_dc = DAT_1419df7bc;
      if ((1 << (local_98[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_e8);
      local_70 = local_98;
      ppuVar5 = &local_78;
      uVar3 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_148,2,&local_78);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 != '\0') {
        local_118 = 0xef;
        uStack_5c = 0xf;
        local_68 = 0x100000100000410;
        local_e8 = 0x410;
        uStack_e4 = 0x1000001;
        uStack_e0 = uStack_60;
        uStack_dc = 0xf;
        if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_100);
        }
        FUN_140041b80(&local_100,&local_e8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_100);
      }
      local_118 = 0xf2;
      local_ac = 6;
      local_b8 = local_res8;
      uVar6 = uVar6 & 0xffffffffffffff00;
      FUN_140e87440(&local_b8,DAT_141a0a728,0x80000000,&local_c8,
                    (ulonglong)ppuVar5 & 0xffffffffffffff00,uVar6);
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      local_12c = 0xf;
      local_138 = 0x100000100000410;
      iVar2 = FUN_140e851f0(&local_c8,&local_138,DAT_141955260,0);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if (iVar2 != 0) {
        local_118 = 0xf3;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a03228);
        uVar6 = 0;
        FUN_140e63610(local_res8,local_res10,&local_148,0,uVar3,0);
      }
      cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_58,&local_res8,&local_res10);
  local_118 = 0xf6;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5e38);
  FUN_140e87170(uVar3,DAT_141a0a728,0x80000000,&local_d8,local_res8,local_res10);
  local_12c = 0xf;
  local_138 = 0x100000100000410;
  iVar2 = FUN_140e851f0(&local_d8,&local_138,DAT_141955260,0);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar2 == 0) {
    local_118 = 0xf7;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f87d8);
    FUN_140e63610(local_res8,local_res10,&local_148,0,uVar3,0);
  }
  local_118 = 0xf9;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5ef8);
  if (puVar4 != &local_110) {
    local_e8 = *(undefined4 *)puVar4;
    uStack_e4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_e0 = *(undefined4 *)(puVar4 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_110);
    }
    FUN_140041b80(&local_110,&local_e8);
  }
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5e38);
  FUN_140e87930(uVar3,DAT_1419f5ef8,0x80000000,&local_110);
  local_118 = 0xfa;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f7f48);
  FUN_140e63610(local_res8,local_res10,&local_148,0,uVar3,0);
  if (local_48 != 0) {
    FUN_140e4cd60();
    local_48 = 0;
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

