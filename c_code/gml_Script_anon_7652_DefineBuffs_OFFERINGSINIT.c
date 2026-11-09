// gml_Script_anon_7652_DefineBuffs_OFFERINGSINIT @ 0x1403c7500

undefined8 *
gml_Script_anon_7652_DefineBuffs_OFFERINGSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 **ppuVar6;
  undefined8 *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_94;
  undefined1 local_90 [16];
  longlong local_80;
  undefined1 local_70 [56];
  
  local_b0 = "gml_Script_anon@7180@DefineBuffs@OFFERINGSINIT";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x10a;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x10b;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  uStack_ec = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_f0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = (undefined8 *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_f8);
  }
  uStack_10c = 7;
  local_118 = (undefined8 *)CONCAT44(local_118._4_4_,7);
  FUN_140042560(&local_f8,&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = local_f8;
  uStack_110 = uStack_f0;
  uStack_10c = uStack_ec;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_118);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_a8 = 0x10d;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  local_118 = &local_c8;
  ppuVar6 = &local_118;
  uVar3 = gml_Script_choose_weighted(local_res8,local_res10,&local_108,1,ppuVar6);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_a8 = 0x10d;
  }
  else {
    local_a8 = 0x10e;
    if (1 < param_4) {
      puVar5 = (undefined8 *)param_5[1];
    }
    FUN_140e87440(puVar5,DAT_1419f5e78,0x80000000,&local_a0,(ulonglong)ppuVar6 & 0xffffffffffffff00,
                  0);
    iVar2 = FUN_140e63cb0(local_90,&local_res8,&local_res10,&local_a0);
    if (0 < iVar2) {
      do {
        local_a8 = 0x110;
        uStack_10c = 0xf;
        local_118 = (undefined8 *)0x10000010000005d;
        local_f8 = (undefined8 *)0x10000010000005d;
        uStack_f0 = uStack_110;
        uStack_ec = 0xf;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_f8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_d8);
        local_a8 = 0x111;
        if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        local_dc = 0;
        local_e8 = 0x3ff0000000000000;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_e8);
        cVar1 = FUN_140e643f0(local_90,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_90,&local_res8,&local_res10);
    if (local_80 != 0) {
      FUN_140e4cd60();
      local_80 = 0;
    }
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

