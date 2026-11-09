// gml_Script_anon_37451_DefineTrinkets_TRINKETSINIT @ 0x140613e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_37451_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined4 uVar10;
  undefined1 **ppuVar9;
  ulonglong in_stack_fffffffffffffea0;
  undefined1 **ppuVar11;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f4;
  undefined1 local_e8 [16];
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_110 = "gml_Script_anon@36987@DefineTrinkets@TRINKETSINIT";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x528;
  pcVar6 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_e8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x529;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  FUN_140e87440(puVar4,DAT_141a1f440,0x80000000,&local_128,uVar7,in_stack_fffffffffffffea0);
  in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
  FUN_140e87440(&local_128,DAT_141a57c50,0x80000000,&local_100,uVar7 & 0xffffffffffffff00,
                in_stack_fffffffffffffea0);
  uStack_13c = 10;
  local_148 = 2;
  iVar2 = FUN_140e851f0(&local_100,&local_148,DAT_141955260,0);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar2 == 0) {
    local_108 = 0x52a;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_148 = CONCAT44(uRam00000001419e6b34,_DAT_1419e6b30);
    uStack_140 = uRam00000001419e6b38;
    uStack_13c = uRam00000001419e6b3c;
    if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_148);
    local_88 = local_e8;
    ppuVar9 = &local_88;
    uVar3 = gml_Script_choose_weighted(local_res8,local_res10,&local_158,1,&local_88);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      local_108 = 0x52a;
    }
    else {
      local_108 = 0x52c;
      if (0 < param_4) {
        puVar5 = (undefined8 *)*param_5;
      }
      FUN_140e87440(puVar5,DAT_141a1f440,0x80000000,&local_128,
                    (ulonglong)ppuVar9 & 0xffffffffffffff00,
                    in_stack_fffffffffffffea0 & 0xffffffffffffff00);
      local_148 = local_128;
      uStack_140 = uStack_120;
      uStack_13c = uStack_11c;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_148);
      local_108 = 0x52d;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      FUN_140e87170(&local_138,DAT_1419fe0e8,0x80000000,&local_98,local_res8,local_res10);
      plVar8 = local_res8;
      FUN_140e87170(&local_138,DAT_1419fe158,0x80000000,&local_a8,local_res8,local_res10);
      uVar10 = (undefined4)((ulonglong)plVar8 >> 0x20);
      local_148 = local_98;
      uStack_140 = uStack_90;
      uStack_13c = uStack_8c;
      if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_148);
      local_88 = local_e8;
      local_148 = local_a8;
      uStack_140 = uStack_a0;
      uStack_13c = uStack_9c;
      if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_d8);
      }
      FUN_140041b80(local_d8,&local_148);
      local_80 = local_d8;
      local_148 = CONCAT44(uRam0000000141dd4eac,_DAT_141dd4ea8);
      uStack_140 = uRam0000000141dd4eb0;
      uStack_13c = DAT_141dd4eb4;
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_148);
      local_78 = local_c8;
      uStack_13c = 0xf;
      local_148 = 0x1000000000000e2;
      local_68 = 0xe2;
      uStack_64 = 0x1000000;
      uStack_60 = uStack_140;
      uStack_5c = 0xf;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_68);
      local_70 = local_b8;
      ppuVar9 = (undefined1 **)CONCAT44(uVar10,DAT_141a0a7c8);
      ppuVar11 = &local_88;
      uVar3 = FUN_140e634e0(local_res8,local_res10,&local_158,4,ppuVar9,&local_88);
      iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,uVar3);
      if (0 < iVar2) {
        do {
          local_108 = 0x52e;
          puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0xc008000000000000;
          local_108 = 0x52f;
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          local_158 = 0;
          local_150 = 0;
          local_14c = 5;
          uStack_13c = 0xf;
          local_148 = 0x100000000000149;
          local_68 = 0x149;
          uStack_64 = 0x1000000;
          uStack_60 = uStack_140;
          uStack_5c = 0xf;
          if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          FUN_140041b80(local_e8,&local_68);
          local_88 = local_e8;
          ppuVar9 = &local_88;
          gml_GlobalScript_world_pos_to_gui(local_res8,local_res10,&local_158,1,&local_88);
          cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
        } while (cVar1 != '\0');
      }
      FUN_140e63970(local_58,&local_res8,&local_res10);
      DAT_141a67c38 = 1;
      FUN_140e87440(&local_128,DAT_141a57c50,0x80000000,&local_100,
                    (ulonglong)ppuVar9 & 0xffffffffffffff00,(ulonglong)ppuVar11 & 0xffffffffffffff00
                   );
      DAT_141a67c38 = 0;
      DAT_141a72aac = 0;
      if (local_48 != 0) {
        FUN_140e4cd60();
        local_48 = 0;
      }
    }
  }
  else {
    local_108 = 0x529;
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

