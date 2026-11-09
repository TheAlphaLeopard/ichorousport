// gml_Script_anon_11624____struct___351_gml_Object_oBossEmbraceHalf_Create_0 @ 0x14076b260

undefined8 *
gml_Script_anon_11624____struct___351_gml_Object_oBossEmbraceHalf_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar6;
  ulonglong uVar5;
  undefined8 **ppuVar7;
  ulonglong uVar8;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined1 local_98 [16];
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_b0 = "gml_Script_anon@11255@gml_Object_oBossEmbraceHalf_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0x166;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0x167;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  if (puVar3 != &local_88) {
    local_138 = *puVar3;
    uStack_130 = *(undefined4 *)(puVar3 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_138);
  }
  local_50 = &local_88;
  ppuVar7 = &local_50;
  uVar5 = CONCAT44(uVar6,DAT_141a02ef8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_c8,1,uVar5,ppuVar7);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
    uVar8 = (ulonglong)ppuVar7 & 0xffffffffffffff00;
    uVar5 = uVar5 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419f62b8,0x80000000,&local_f8,uVar5,uVar8);
    uStack_12c = 0;
    local_138 = 0;
    iVar2 = FUN_140e851f0(&local_f8,&local_138,DAT_141955260,1);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (0 < iVar2) {
      local_a8 = 0x168;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
      uVar8 = uVar8 & 0xffffffffffffff00;
      uVar5 = uVar5 & 0xffffffffffffff00;
      FUN_140e87440(uVar4,DAT_141a1f090,0x80000000,&local_108,uVar5,uVar8);
      uVar8 = uVar8 & 0xffffffffffffff00;
      uVar5 = uVar5 & 0xffffffffffffff00;
      FUN_140e87440(uVar4,DAT_1419f62b8,0x80000000,&local_f8,uVar5,uVar8);
      FUN_140e87440(uVar4,DAT_1419f5a58,0x80000000,&local_e8,uVar5 & 0xffffffffffffff00,
                    uVar8 & 0xffffffffffffff00);
      uStack_12c = local_fc;
      uStack_130 = local_100;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
        local_138 = local_108;
      }
      else {
        FUN_1400419b0(&local_138,&local_108);
      }
      FUN_1400460e0(&local_138,&local_f8);
      local_d8 = (undefined4)local_138;
      uStack_d4 = local_138._4_4_;
      uStack_d0 = uStack_130;
      uStack_cc = uStack_12c;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_d8);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      local_48 = local_78;
      local_d8 = (undefined4)local_e8;
      uStack_d4 = local_e8._4_4_;
      uStack_d0 = uStack_e0;
      uStack_cc = uStack_dc;
      if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_68);
      }
      FUN_140041b80(local_68,&local_d8);
      local_40 = local_68;
      puVar3 = (undefined8 *)FUN_140e79230(&local_128,2,&local_48);
      if (puVar3 != &local_118) {
        local_d8 = *(undefined4 *)puVar3;
        uStack_d4 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_d0 = *(undefined4 *)(puVar3 + 1);
        uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_d8);
      }
      FUN_140e87930(uVar4,DAT_141a1f090,0x80000000,&local_118);
    }
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

