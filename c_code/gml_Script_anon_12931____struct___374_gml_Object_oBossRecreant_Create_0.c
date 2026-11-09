// gml_Script_anon_12931____struct___374_gml_Object_oBossRecreant_Create_0 @ 0x1407cdef0

undefined8 *
gml_Script_anon_12931____struct___374_gml_Object_oBossRecreant_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *local_res8;
  undefined8 local_res10;
  ulonglong in_stack_fffffffffffffed8;
  undefined8 *puVar5;
  ulonglong in_stack_fffffffffffffee0;
  ulonglong uVar6;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  longlong *local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 local_60 [16];
  longlong local_50;
  
  local_c0 = "gml_Script_anon@12454@___struct___374@gml_Object_oBossRecreant_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_84 = 0xffffff;
  local_90 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_64 = 0;
  local_70 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x26d;
  local_res8 = param_1;
  local_res10 = param_2;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
  FUN_140e87440(uVar3,DAT_141a0a928,0x80000000,&local_90,
                in_stack_fffffffffffffed8 & 0xffffffffffffff00,
                in_stack_fffffffffffffee0 & 0xffffffffffffff00);
  uVar3 = FUN_140069500(uVar3);
  uVar6 = 0;
  puVar5 = &local_90;
  puVar4 = (undefined8 *)FUN_140e63610(uVar3,local_res10,&local_70,0,puVar5,0);
  if (puVar4 != &local_e8) {
    local_d8 = *puVar4;
    uStack_d0 = *(undefined4 *)(puVar4 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_d8);
  }
  FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_e8);
  local_b8 = 0x26e;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_ec = 0;
  local_f8 = 0x3ff0000000000000;
  FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_f8);
  local_b8 = 0x270;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_fc = 0;
  local_108 = 0;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a572d0);
  FUN_140e87930(uVar3,DAT_141a1dce0,0x80000000,&local_108);
  local_b8 = 0x271;
  local_10c = 0xf;
  local_118 = 0x100000000000005;
  iVar2 = FUN_140e63cb0(local_60,&local_res8,&local_res10,&local_118);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (0 < iVar2) {
    do {
      local_b8 = 0x273;
      uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
      local_10c = 6;
      local_118 = local_res10;
      uVar6 = uVar6 & 0xffffffffffffff00;
      puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffffffffff00);
      FUN_140e87440(&local_118,DAT_141a0a828,0x80000000,&local_a0,puVar5,uVar6);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      iVar2 = FUN_140e851f0(uVar3,&local_a0,DAT_141955260,0);
      if (iVar2 == 0) {
        local_74 = 6;
        local_80 = local_res8;
        uVar6 = uVar6 & 0xffffffffffffff00;
        puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffffffffff00);
        FUN_140e87440(&local_80,DAT_141a1f580,0x80000000,&local_b0,puVar5,uVar6);
        if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_80);
        }
        uStack_cc = 0xf;
        local_d8 = 0x100000000000005;
        iVar2 = FUN_140e851f0(&local_b0,&local_d8,DAT_141955260,0);
        if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        if (iVar2 == 0) {
          local_b8 = 0x274;
          FUN_140edd0e0(local_res8,local_res10,0,0);
        }
      }
      cVar1 = FUN_140e643f0(local_60,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_60,&local_res8,&local_res10);
  if (local_50 != 0) {
    FUN_140e4cd60();
    local_50 = 0;
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

