// gml_Script____struct___374_gml_Object_oBossRecreant_Create_0 @ 0x1407ce3a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___374_gml_Object_oBossRecreant_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  byte local_a4;
  undefined1 local_a0 [12];
  byte local_94;
  undefined1 local_90 [12];
  byte local_84;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  local_c0 = "gml_Script_anon@12671@___struct___374@gml_Object_oBossRecreant_Create_0";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 0x279;
  _eh_vector_constructor_iterator_(&local_b0,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_b8 = 0x27a;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar3 != &local_b0) {
    local_f8 = *puVar3;
    uStack_f0 = *(undefined4 *)(puVar3 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    FUN_140041b80(&local_b0,&local_f8);
  }
  local_68 = &local_b0;
  local_f8 = CONCAT44(uRam0000000141dc6a14,_DAT_141dc6a10);
  uStack_f0 = uRam0000000141dc6a18;
  uStack_ec = uRam0000000141dc6a1c;
  if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a0);
  }
  FUN_140041b80(local_a0,&local_f8);
  local_60 = local_a0;
  local_f8 = CONCAT44(uRam00000001419e8724,_DAT_1419e8720);
  uStack_f0 = uRam00000001419e8728;
  uStack_ec = uRam00000001419e872c;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_f8);
  local_58 = local_90;
  FUN_140e609c0(param_1);
  puVar3 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_108,3,&local_68);
  uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_f0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_f8,puVar3);
  }
  FUN_140042560(&local_f8,uVar2);
  if (&local_f8 != puVar4) {
    local_78 = (undefined4)local_f8;
    uStack_74 = local_f8._4_4_;
    uStack_70 = uStack_f0;
    uStack_6c = uStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_78);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e60910(1);
  local_b8 = 0x27b;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_f0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_f8,puVar3);
  }
  FUN_140042560(&local_f8,uVar2);
  FUN_1400460e0(uVar5,&local_f8);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_b8 = 0x27d;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd428);
  uVar2 = FUN_140e78f40(0xffffffffffffffff,1);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = uVar2;
  local_b8 = 0x27f;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_108,0,uVar2,0);
  local_b8 = 0x280;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_108,0,uVar2,0);
  local_b8 = 0x283;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  local_78 = (undefined4)DAT_1419df7b0;
  uStack_74 = DAT_1419df7b0._4_4_;
  uStack_70 = DAT_1419df7b8;
  uStack_6c = DAT_1419df7bc;
  if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  FUN_140041b80(&local_b0,&local_78);
  local_68 = &local_b0;
  local_78 = (undefined4)DAT_1419df7b0;
  uStack_74 = DAT_1419df7b0._4_4_;
  uStack_70 = DAT_1419df7b8;
  uStack_6c = DAT_1419df7bc;
  if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a0);
  }
  FUN_140041b80(local_a0,&local_78);
  local_60 = local_a0;
  uVar2 = gml_Script_animcurve_lerp(param_1,param_2,&local_108,2,&local_68);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_b8 = 0x284;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_cc = 0;
    local_d8 = 0;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_d8);
  }
  local_b8 = 0x286;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0;
  FUN_140e87930(uVar2,DAT_141a1dce0,0x80000000,&local_e8);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(&local_b0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

