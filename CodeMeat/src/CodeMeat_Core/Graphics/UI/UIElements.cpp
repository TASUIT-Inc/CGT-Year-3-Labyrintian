#include "UIElements.h"

void UIElements::PauseMenu()
{
	
	ImGui::Text("This is normal text.");
	if (ImGui::Button("Resume", ImVec2(120, 120)))
	{
		static AudioSource speaker;
		//Do nothing
		speaker.Play(SE_LOAD("Error.wav"));
		std::cout << "Resume";
	}
	if (ImGui::Button("Options", ImVec2(120, 120)))
	{
		std::cout << "Options";
		//Do nothing
	}
	if (ImGui::Button("Exit", ImVec2(120, 120)))
	{
		//Do nothing
		std::cout << "Exit";
	}
	
}

void UIElements::PuzzleTest()
{
	ImGui::SetNextWindowContentSize(ImVec2(550, 500));
	ImGui::SetWindowSize(ImVec2(0, 0));
	ImGui::SetWindowFontScale(9.5);
	const float Spacing = ImGui::GetStyle().ItemSpacing.x;
	static float ButtonWidth = 100.0f;
	float pos;
	static unsigned int Img1 = GameObject::loadTexture("2.png");
	static unsigned int Img2 = GameObject::loadTexture("3.png");
	static unsigned int Img3 = GameObject::loadTexture("5.png");
	static unsigned int Img4 = GameObject::loadTexture("9.png");
	static int b1Index = 0;
	static int b2Index = 0;
	static int b3Index = 0;
	static int b4Index = 0;

	static bool input = false;
	
	ImGui::OpenPopup("Puzzle");

	
	while (ImGui::BeginPopup("Puzzle"))
	{

		pos = ButtonWidth + Spacing;
		ImGui::SameLine(ImGui::GetWindowWidth() - pos);
		if (ImGui::ArrowButton("UArr1", ImGuiDir_Up))
		{
			b1Index--;
			
			if (b1Index < 0)
				b1Index = 3;
			std::cout << b1Index << std::endl;
				
		}
		ButtonWidth = ImGui::GetItemRectSize().x;


		pos += ButtonWidth + Spacing;
		ImGui::SameLine(ImGui::GetWindowWidth() - pos);
		if (ImGui::ArrowButton("UArr2", ImGuiDir_Up))
		{
			b2Index--;
			
			if (b2Index < 0)
				b2Index = 3;
			std::cout << b2Index << std::endl;
		}
		ButtonWidth = ImGui::GetItemRectSize().x;

		pos += ButtonWidth + Spacing;
		ImGui::SameLine(ImGui::GetWindowWidth() - pos);
		if (ImGui::ArrowButton("UArr3", ImGuiDir_Up))
		{
			b3Index--;
			
			if (b3Index < 0)
				b3Index = 3;
			std::cout << b3Index << std::endl;
		}
		ButtonWidth = ImGui::GetItemRectSize().x;

		pos += ButtonWidth + Spacing;
		ImGui::SameLine(ImGui::GetWindowWidth() - pos);
		if (ImGui::ArrowButton("UArr4", ImGuiDir_Up))
		{
			b4Index--;
			
			if (b4Index < 0)
				b4Index = 3;
			std::cout << b4Index << std::endl;
		}
		ButtonWidth = ImGui::GetItemRectSize().x;


		ImGui::NewLine();
		pos = ButtonWidth + Spacing;
		ImGui::SameLine(ImGui::GetWindowWidth() - pos);
		switch (b1Index) 
		{
		case 0:
			ImGui::Image((void*)Img1, ImVec2(120, 120));
			break;
		case 1:
			ImGui::Image((void*)Img2, ImVec2(120, 120));
			break;
		case 2:
			ImGui::Image((void*)Img3, ImVec2(120, 120));
			break;
		case 3:
			ImGui::Image((void*)Img4, ImVec2(120, 120));
			break;
		}
		ButtonWidth = ImGui::GetItemRectSize().x;

		pos += ButtonWidth + Spacing;
		ImGui::SameLine(ImGui::GetWindowWidth() - pos);
		switch (b2Index)
		{
		case 0:
			ImGui::Image((void*)Img1, ImVec2(120, 120));
			break;
		case 1:
			ImGui::Image((void*)Img2, ImVec2(120, 120));
			break;
		case 2:
			ImGui::Image((void*)Img3, ImVec2(120, 120));
			break;
		case 3:
			ImGui::Image((void*)Img4, ImVec2(120, 120));
			break;
		}
		ButtonWidth = ImGui::GetItemRectSize().x;

		pos += ButtonWidth + Spacing;
		ImGui::SameLine(ImGui::GetWindowWidth() - pos);
		switch (b3Index)
		{
		case 0:
			ImGui::Image((void*)Img1, ImVec2(120, 120));
			break;
		case 1:
			ImGui::Image((void*)Img2, ImVec2(120, 120));
			break;
		case 2:
			ImGui::Image((void*)Img3, ImVec2(120, 120));
			break;
		case 3:
			ImGui::Image((void*)Img4, ImVec2(120, 120));
			break;
		}
		ButtonWidth = ImGui::GetItemRectSize().x;

		pos += ButtonWidth + Spacing;
		ImGui::SameLine(ImGui::GetWindowWidth() - pos);
		switch (b4Index)
		{
		case 0:
			ImGui::Image((void*)Img1, ImVec2(120, 120));
			break;
		case 1:
			ImGui::Image((void*)Img2, ImVec2(120, 120));
			break;
		case 2:
			ImGui::Image((void*)Img3, ImVec2(120, 120));
			break;
		case 3:
			ImGui::Image((void*)Img4, ImVec2(120, 120));
			break;
		}
		ButtonWidth = ImGui::GetItemRectSize().x;


		pos = ButtonWidth + Spacing;
		ImGui::NewLine();
		ImGui::SameLine(ImGui::GetWindowWidth() - pos);
		if (ImGui::ArrowButton("DArr1", ImGuiDir_Down))
		{
			b1Index++;
			
			if (b1Index > 3)
				b1Index = 0;
			std::cout << b1Index << std::endl;

		}
		ButtonWidth = ImGui::GetItemRectSize().x;


		pos += ButtonWidth + Spacing;
		ImGui::SameLine(ImGui::GetWindowWidth() - pos);
		if (ImGui::ArrowButton("DArr2", ImGuiDir_Down))
		{
			b2Index++;
			
			if (b2Index > 3)
				b2Index = 0;
			std::cout << b2Index << std::endl;
		}
		ButtonWidth = ImGui::GetItemRectSize().x;

		pos += ButtonWidth + Spacing;
		ImGui::SameLine(ImGui::GetWindowWidth() - pos);
		if (ImGui::ArrowButton("DArr3", ImGuiDir_Down))
		{
			b3Index++;
			
			if (b3Index > 3)
				b3Index = 0;
			std::cout << b3Index << std::endl;
		}
		ButtonWidth = ImGui::GetItemRectSize().x;

		pos += ButtonWidth + Spacing;
		ImGui::SameLine(ImGui::GetWindowWidth() - pos);
		if (ImGui::ArrowButton("DArr4", ImGuiDir_Down))
		{
			b4Index++;
			
			if (b4Index > 3)
				b4Index = 0;
			std::cout << b4Index << std::endl;
		}
		ButtonWidth = ImGui::GetItemRectSize().x;

		ImGui::NewLine();
		pos = 240.0f + Spacing;
		ImGui::SameLine(ImGui::GetWindowWidth() - pos);
		if (ImGui::Button(" ", ImVec2(240.0f, 120.0f))) 
		{
			if (Events::TestCode(b4Index, b3Index, b2Index, b1Index)) 
			{
				if (REngine::Instance()->FindObjectWithTag("DOOR") != nullptr) 
				{
					GameObject* a = REngine::Instance()->FindObjectWithTag("DOOR");
					glm::vec3 pos = a->GetKinematics()->m_Transform.GetPos();
					a->GetKinematics()->m_Transform.Translate(glm::vec3(pos.x, pos.y + 0.5f, pos.z));
				}
			};
		}
	}
	ImGui::EndPopup();
	
}

void UIElements::UIStyling(ImColor col, ImColor col2)
{
	ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(col));
	ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(col2));
}

void UIElements::CleanStyling()
{
	ImGui::PopStyleColor();
	ImGui::PopStyleColor();
}
