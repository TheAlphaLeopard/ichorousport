// gml_Object_oTest_Create_0 @ 0x140db0320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oTest_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  char *local_b8;
  undefined4 local_b0;
  longlong local_a8;
  byte local_9c;
  longlong local_98;
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  longlong *local_58;
  longlong *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_b8 = "gml_Object_oTempParticle_Draw_0";
  local_b0 = 0;
  local_c0 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c0;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  plVar3 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef648);
  plVar4 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1d980);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_b0 = 2;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01508);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_b0 = 3;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    local_d0 = 0;
    local_c8 = 0;
    local_c4 = 5;
    if (plVar3 != &local_a8) {
      local_e8 = (undefined8 *)*plVar3;
      uStack_e0 = (char *)plVar3[1];
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_e8);
    }
    local_58 = &local_a8;
    if (plVar4 != &local_98) {
      local_e8 = (undefined8 *)*plVar4;
      uStack_e0 = (char *)plVar4[1];
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_e8);
    }
    local_50 = &local_98;
    puVar6 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_d0,2,CONCAT44(uVar7,DAT_141a01138),&local_58);
    if (puVar6 != &local_88) {
      local_e8 = (undefined8 *)*puVar6;
      uStack_e0 = (char *)puVar6[1];
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_e8);
    }
    local_48 = &local_88;
    local_e8 = (undefined8 *)CONCAT44(uRam00000001419ee044,_DAT_1419ee040);
    uStack_e0 = (char *)CONCAT44(uRam00000001419ee04c,uRam00000001419ee048);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_e8);
    local_40 = local_78;
    local_e8 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_e0 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_e8);
    local_38 = local_68;
    gml_Script_pal_swap_layer_init(param_1,param_2,&local_f8,3,&local_48);
  }
  local_b0 = 5;
  FUN_140ec5c30(param_1);
  local_b0 = 7;
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_b0 = 8;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_f8 = 0;
    local_f0 = 0;
    local_ec = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a01508);
    uStack_e0 = "gml_Script_pal_swap_reset";
    local_e8 = DAT_141dc7a50;
    DAT_141dc7a50 = &local_e8;
    local_ec = 5;
    local_f8 = 0;
    local_d8 = 0x71;
    iVar2 = FUN_140ec9d80();
    if (iVar2 != -1) {
      local_d8 = 0x71;
      FUN_140ec9dc0();
    }
    DAT_141dc7a50 = local_e8;
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_c0;
  return;
}

