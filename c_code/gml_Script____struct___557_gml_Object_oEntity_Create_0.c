// gml_Script____struct___557_gml_Object_oEntity_Create_0 @ 0x140aaade0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___557_gml_Object_oEntity_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  longlong local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined1 *local_88;
  undefined8 local_78;
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  
  local_b0 = "gml_Script_anon@2962@___struct___557@gml_Object_oEntity_Create_0";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 0xba;
  _eh_vector_constructor_iterator_(&local_78,0x10,3,FUN_1400424d0,FUN_140041b30);
  plVar1 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_a8 = 0xbc;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar2 != &local_78) {
    local_f8 = (undefined8 *)*puVar2;
    uStack_f0 = *(undefined4 *)(puVar2 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_f8);
  }
  local_98 = &local_78;
  local_f8 = (undefined8 *)CONCAT44(uRam0000000141dc6ff4,_DAT_141dc6ff0);
  uStack_f0 = uRam0000000141dc6ff8;
  uStack_ec = uRam0000000141dc6ffc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_f8);
  uStack_90 = local_68;
  local_f8 = (undefined8 *)CONCAT44(uRam00000001419eb354,_DAT_1419eb350);
  uStack_f0 = uRam00000001419eb358;
  uStack_ec = uRam00000001419eb35c;
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_f8);
  local_88 = local_58;
  FUN_140e609c0(param_1);
  plVar4 = (longlong *)gml_Script_arc(param_1,param_2,&local_e8,3,&local_98);
  uStack_ec = *(undefined4 *)((longlong)plVar4 + 0xc);
  uStack_f0 = (undefined4)plVar4[1];
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = (undefined8 *)*plVar4;
  }
  else {
    FUN_1400419b0(&local_f8,plVar4);
  }
  FUN_140042560(&local_f8,plVar1);
  if (&local_f8 != puVar3) {
    local_98 = local_f8;
    uStack_90 = (undefined1 *)CONCAT44(uStack_ec,uStack_f0);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_98);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140e60910(1);
  local_a8 = 0xbd;
  plVar4 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_ec = *(undefined4 *)((longlong)plVar4 + 0xc);
  uStack_f0 = (undefined4)plVar4[1];
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) == 0) {
    local_f8 = (undefined8 *)*plVar4;
  }
  else {
    FUN_1400419b0(&local_f8,plVar4);
  }
  FUN_140042560(&local_f8,plVar1);
  FUN_1400460e0(uVar5,&local_f8);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_a8 = 0xbf;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd428);
  uVar5 = FUN_140e78f40(0xffffffffffffffff,1);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = uVar5;
  local_a8 = 0xc1;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_e8,0,uVar5,0);
  local_a8 = 0xc2;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_e8,0,uVar5,0);
  local_a8 = 0xc4;
  if (plVar1 != &local_c8) {
    local_98 = (undefined8 *)*plVar1;
    uStack_90 = (undefined1 *)plVar1[1];
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_98);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_c8);
  local_a8 = 0xc5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_cc = 0;
  local_d8 = 0;
  FUN_140e87930(uVar5,DAT_141a1dce0,0x80000000,&local_d8);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_78,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

