// gml_Object_oMainMenuPause_Draw_64 @ 0x140b518f0

void gml_Object_oMainMenuPause_Draw_64(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong **pplVar4;
  undefined4 *puVar5;
  code *pcVar6;
  ulonglong in_stack_ffffffffffffff20;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_64;
  undefined4 local_60 [3];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined8 local_40;
  undefined4 local_34;
  undefined4 *local_30;
  undefined1 *local_28;
  
  local_80 = "gml_Object_oMainMenuPause_Step_0";
  local_78 = 0;
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_64 = 0xffffff;
  local_70 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_34 = 0xffffff;
  local_40 = 0;
  local_78 = 2;
  uStack_ac = 6;
  local_b8 = param_1;
  FUN_140e87440(&local_b8,DAT_141a0a7e8,0,&local_70,(ulonglong)pcVar6 & 0xffffffffffffff00,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  uStack_ac = 0;
  local_b8 = (longlong *)&DAT_bff0000000000000;
  iVar2 = FUN_140e851f0(&local_70,&local_b8,DAT_141955260,0);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if (iVar2 == 0) {
    local_78 = 4;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a575f0);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 == '\0') {
      local_78 = 5;
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 5;
      uVar3 = gml_Script_InputMousePressed(param_1,param_2,&local_a8,0,0);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 != '\0') {
        local_78 = 6;
        pplVar4 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a575f0);
        uStack_ac = 0xd;
        local_b8 = (longlong *)0x3ff0000000000000;
        if (&local_b8 != pplVar4) {
          local_98 = 0;
          uStack_94 = 0x3ff00000;
          uStack_90 = uStack_b0;
          uStack_8c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)pplVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pplVar4);
          }
          FUN_140041b80(pplVar4,&local_98);
        }
      }
    }
    else {
      local_78 = 8;
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 5;
      puVar5 = (undefined4 *)
               FUN_140e8da20(&local_40,param_1,7,&DAT_1419ec230,&DAT_1419ec220,&DAT_1419ec200,
                             &DAT_1419ec1e0,&DAT_1419ec240,&DAT_1419ec210,&DAT_1419ec1f0);
      if (puVar5 != local_60) {
        local_98 = *puVar5;
        uStack_94 = puVar5[1];
        uStack_90 = puVar5[2];
        uStack_8c = puVar5[3];
        if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_60);
        }
        FUN_140041b80(local_60,&local_98);
      }
      local_30 = local_60;
      local_98 = (undefined4)DAT_1419df7b0;
      uStack_94 = DAT_1419df7b0._4_4_;
      uStack_90 = DAT_1419df7b8;
      uStack_8c = DAT_1419df7bc;
      if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_50);
      }
      FUN_140041b80(local_50,&local_98);
      local_28 = local_50;
      uVar3 = gml_Script_InputReleased(param_1,param_2,&local_a8,2,&local_30);
      cVar1 = FUN_140e491e0(uVar3);
      if (cVar1 != '\0') {
        local_78 = 9;
        pplVar4 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a575f0);
        uStack_ac = 0xd;
        local_b8 = (longlong *)0x0;
        if (&local_b8 != pplVar4) {
          local_98 = 0;
          uStack_94 = 0;
          uStack_90 = uStack_b0;
          uStack_8c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)pplVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pplVar4);
          }
          FUN_140041b80(pplVar4,&local_98);
        }
      }
    }
  }
  else {
    local_78 = 2;
  }
  if ((1 << ((byte)local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_40);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return;
}

