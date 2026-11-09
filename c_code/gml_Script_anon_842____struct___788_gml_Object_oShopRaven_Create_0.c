// gml_Script_anon_842____struct___788_gml_Object_oShopRaven_Create_0 @ 0x140d73420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_842____struct___788_gml_Object_oShopRaven_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined8 *local_res18 [2];
  undefined4 uVar9;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
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
  byte local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@348@gml_Object_oShopRaven_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x17;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x18;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f7228);
  FUN_140046040(uVar5);
  local_48 = 0x1a;
  puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7228);
  uStack_7c = 0;
  local_88 = 0x3ff0000000000000;
  iVar4 = FUN_140e851f0(puVar6,&local_88,DAT_141955260,0);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if (iVar4 == 0) {
    local_48 = 0x1b;
    if (param_3 != (undefined8 *)&DAT_141ddb688) {
      local_88 = CONCAT44(uRam0000000141ddb68c,_DAT_141ddb688);
      uStack_80 = uRam0000000141ddb690;
      uStack_7c = DAT_141ddb694;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_88);
    }
  }
  else {
    local_48 = 0x1d;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    uStack_8c = *(undefined4 *)((longlong)puVar6 + 0xc);
    uStack_90 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) == 0) {
      local_98 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_98,puVar6);
    }
    uStack_7c = 7;
    local_88 = CONCAT44(local_88._4_4_,1);
    FUN_1400462a0(&local_98,&local_88);
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    local_88 = local_98;
    uStack_80 = uStack_90;
    uStack_7c = uStack_8c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_88);
    if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_res18[0] = &local_78;
    uStack_8c = DAT_141ddb6d4;
    uStack_90 = DAT_141ddb6d0;
    if ((1 << ((byte)DAT_141ddb6d4 & 0x1f) & 0x46U) == 0) {
      local_98 = DAT_141ddb6c8;
    }
    else {
      FUN_1400419b0(&local_98,&DAT_141ddb6c8);
    }
    uVar2 = uStack_8c;
    uVar1 = uStack_90;
    uVar5 = local_98;
    uVar7 = FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar9,DAT_1419fcb18),local_res18);
    uVar8 = 1 << ((byte)uVar2 & 0x1f) & 0x46;
    uStack_80 = uVar1;
    uStack_7c = uVar2;
    if (uVar8 == 0) {
      local_88 = uVar5;
    }
    else {
      FUN_1400419b0(&local_88,&local_98);
    }
    FUN_1400460e0(&local_88,uVar7);
    local_68 = (undefined4)local_88;
    uStack_64 = local_88._4_4_;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_68);
    if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    if (uVar8 != 0) {
      FUN_140041a50(&local_98);
    }
    local_48 = 0x1f;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    local_res18[0] = &local_a8;
    uVar5 = gml_Script_bmm_sfx_toggle_check(param_1,param_2,&local_b8,1,local_res18);
    cVar3 = FUN_140e491e0(uVar5);
    if (cVar3 == '\0') {
      local_48 = 0x20;
      (**(code **)(*param_1 + 8))(param_1,DAT_1419f7228);
      puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7278);
      if (puVar6 == param_3) goto LAB_140d73869;
      local_68 = *(undefined4 *)puVar6;
      uStack_64 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_60 = *(undefined4 *)(puVar6 + 1);
      uStack_5c = *(undefined4 *)((longlong)puVar6 + 0xc);
    }
    else {
      local_48 = 0x22;
      if (&local_a8 == param_3) goto LAB_140d73869;
      local_68 = (undefined4)local_a8;
      uStack_64 = local_a8._4_4_;
      uStack_60 = uStack_a0;
      uStack_5c = uStack_9c;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_68);
  }
LAB_140d73869:
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

