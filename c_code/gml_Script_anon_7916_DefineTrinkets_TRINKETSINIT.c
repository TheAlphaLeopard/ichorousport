// gml_Script_anon_7916_DefineTrinkets_TRINKETSINIT @ 0x1405e7d50

undefined8 *
gml_Script_anon_7916_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar6;
  undefined4 **in_stack_fffffffffffffec0;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  undefined4 local_b0 [4];
  undefined1 local_a0 [16];
  longlong local_90;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 *local_68 [6];
  
  local_100 = "gml_Script_anon@7358@DefineTrinkets@TRINKETSINIT";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x109;
  pcVar6 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_c0,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x10b;
  local_11c = 0xf;
  local_128 = 0x1000000000000ee;
  iVar2 = FUN_140e63cb0(local_a0,&local_res8,&local_res10,&local_128);
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if (0 < iVar2) {
    do {
      local_f8 = 0x10d;
      uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
      local_11c = 0;
      local_128 = 0;
      iVar2 = FUN_140e851f0(uVar3,&local_128,DAT_141955260,1);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      if (iVar2 != -2 && iVar2 < 1) {
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        local_138 = 0;
        local_130 = 0;
        local_12c = 5;
        puVar4 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5a58);
        local_e4 = 0xf;
        local_f0 = 0x100000000000106;
        FUN_140e87440(&local_f0,DAT_1419f5a98,0x80000000,&local_118,
                      (ulonglong)pcVar6 & 0xffffffffffffff00,
                      (ulonglong)in_stack_fffffffffffffec0 & 0xffffffffffffff00);
        if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f0);
        }
        if (puVar4 != local_b0) {
          local_80 = *puVar4;
          uStack_7c = puVar4[1];
          uStack_78 = puVar4[2];
          uStack_74 = puVar4[3];
          if ((1 << ((byte)local_b0[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_b0);
          }
          FUN_140041b80(local_b0,&local_80);
        }
        local_68[0] = local_b0;
        local_c4 = 0xf;
        local_d0 = 0x100000000000106;
        uVar3 = FUN_140069500(&local_d0);
        pcVar6 = (code *)&local_118;
        in_stack_fffffffffffffec0 = local_68;
        uVar3 = FUN_140e63610(uVar3,local_res10,&local_138,1,pcVar6,local_68);
        local_d4 = 0;
        local_e0 = 0x4034000000000000;
        iVar2 = FUN_140e851f0(uVar3,&local_e0,DAT_141955260,1);
        if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e0);
        }
        if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d0);
        }
        if (0 < iVar2) {
          local_f8 = 0x10f;
          puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f090);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0x3ff0000000000000;
        }
      }
      cVar1 = FUN_140e643f0(local_a0,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_a0,&local_res8,&local_res10);
  if (local_90 != 0) {
    FUN_140e4cd60();
    local_90 = 0;
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_c0,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

